//
// Created by micha on 2021/11/20.
//

#include "Simulation.h"


Simulation::Simulation()
{
    agg = new aggregate();
    mediator = new Mediator(agg);
    iss = new ISS();
    num_sats = 0;
    sat_fact = new satellite_factory(agg, mediator);


    f9_factory = new falcon9_factory();
    fheavy_factory = new falconHeavy_factory();
    dcrew_factory = new dragonCrew_factory();
    dcargo_factory = new dragonCargo_factory();

    f9_fsr_count = 0;
    fheavy_fsr_count = 0;
    dragons_in_orbit = 0;




    loadSats_command = new load_sats();
    launch_falcon_command = new launch();
    load_command = new load();
    launch_dragon_command = new launch2();
    attach_command = new attach();
    unload_command = new unload();
    detach_command = new detach();


}

Simulation::~Simulation() {}

void Simulation::run()
{
    menu();
}

void Simulation::menu()
{
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Please select an option" << endl;
    cout << "1 -- Create Rocket" << endl;
    cout << "2 -- Manage Dragon Rockets" << endl;
    cout << "3 -- Manage Satellites" << endl;
    cout << "4 -- Manage ISS" << endl;
    cout << "5 -- Save Satellite State" << endl;
    cout << "6 -- Save ISS State" << endl;
    cout << "7 -- Load Satellite State" << endl;
    cout << "8 -- Load ISS State" << endl;
    cout << "---------------------------------------------------------------------" << endl;

    int input;
    cin >> input;

    if(input == 1)
    {
        createrocket();
    }
    else if(input == 2)
    {
        ManageDragons();
    }
    else if(input == 3)
    {
        if(num_sats > 0)
        {
            ManageSats();
        }
        else
        {
            cout << "No satellites available" << endl;
            menu();
        }

    }
    else if(input == 4)
    {
        cout << "---------------------------------------------------------------------" << endl;
        cout << "Please select an option" << endl;
        cout << "1 -- View Crew" << endl;
        cout << "2 -- View Cargo" << endl;
        cout << "---------------------------------------------------------------------" << endl;

        int input;
        cin >> input;

        if(input == 1)
        {
            for(int i = 0; i < iss->getCrew().size(); i++)
            {
                cout << iss->getCrew().data()[i]->getName() << endl;
            }
            menu();
        }
        if(input == 2)
        {
            for(int i = 0; i < iss->getCargo().size(); i++)
            {
                cout << iss->getCargo().data()[i]->getName() << endl;
            }
            menu();

        }
        else
        {
            cout << "invalid choice" << endl;
        }
        menu();


    }
    else if(input == 5)
    {
        if(num_sats == 0)
        {
            cout << "No Satellites to save" << endl;
            menu();
        }

        mediators* temp = new mediators();
        temp->SetMed(mediator->createMemento());
        sat_saves.push_back(temp);
        cout << "satellites saved" << endl;
        menu();
    }
    else if(input == 6)
    {
        if(iss->getCrew().empty() || iss->getCargo().empty())
        {
            cout << "No Cargo, or Crew to save" << endl;
            menu();
        }

        space_stations* temp = new space_stations();
        temp->setSpst(iss->createMemento());
        iss_saves.push_back(temp);
        cout << "iss saved" << endl;
        menu();
    }
    else if(input == 7)
    {
        if(sat_saves.empty())
        {
            cout << "no satellite saves available" << endl;
            menu();
        }

        int counter = 0;
        cout << "---------------------------------------------------------------------" << endl;
        cout << "select a save" << endl;
        vector<mediators*>::iterator iter;
        for(iter = sat_saves.begin(); iter != sat_saves.end(); ++iter)
        {
            counter++;
            cout << counter << " -- SAVE " << counter << endl;
        }
        cout << "---------------------------------------------------------------------" << endl;

        int input;
        cin >> input;

        if(input < 1 || input > counter)
        {
            cout << "invalid choice" << endl;
            menu();
        }
        else
        {
            mediator->setMemento(sat_saves.data()[counter-1]->getMed());
            agg = mediator->getAggregate();
            num_sats = mediator->getAggregate()->createIterator()->getSats().size();
            sat_fact = new satellite_factory(agg, mediator);
            sat_fact->setcounter(num_sats + 1);
            menu();
        }

    }
    else if(input == 8)
    {
        if (iss_saves.empty())
        {
            cout << "no ISS saves available" << endl;
            menu();
        }

        int counter = 0;
        cout << "---------------------------------------------------------------------" << endl;
        cout << "select a save" << endl;
        vector<space_stations *>::iterator iter;
        for (iter = iss_saves.begin(); iter != iss_saves.end(); ++iter) {
            counter++;
            cout << counter << " -- SAVE " << counter << endl;
        }
        cout << "---------------------------------------------------------------------" << endl;

        int input;
        cin >> input;

        if (input < 1 || input > counter) {
            cout << "invalid choice" << endl;
            menu();
        } else {
            iss->setMemento(iss_saves.data()[counter - 1]->getSpst());
            menu();
        }
    }
    else
    {
        cout << "invalid choice" << endl;
        menu();
    }


}

void Simulation::createrocket()
{
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Please Pick a Rocket" << endl;
    cout << "1 -- Falcon Nine" << endl;
    cout << "2 -- Falcon Heavy" << endl;
    cout << "3 -- Dragon Crew" << endl;
    cout << "4 -- Dragon Cargo" << endl;
    cout << "---------------------------------------------------------------------" << endl;


    int input;
    cin >> input;

    if(input == 1)
    {
        falcon9factory();
    }
    else if(input == 2)
    {
        falconHeavyfactory();
    }
    else if(input == 3)
    {
        DragonCrew* currentDCrew = dynamic_cast<DragonCrew *>(dcrew_factory->createDragon(iss));
        DragonCrewStandby(currentDCrew);
    }
    else if(input == 4)
    {
        DragonCargo* currentDCargo = dynamic_cast<DragonCargo *>(dcargo_factory->createDragon(iss));
        DragonCargoStandby(currentDCargo);
    }
    else
    {
        cout << "invalid choice" << endl;
        createrocket();
    }



}

void Simulation::falcon9factory()
{
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Please select an option" << endl;
    cout << "1 -- Create new first stage rocket" << endl;
    cout << "2 -- Use existing first stage rocket" << endl;
    cout << "---------------------------------------------------------------------" << endl;

    Falcon9* current_f9;

    int input;
    cin >> input;

    if(input == 1)
    {
        FirstStageRocket* fsr = new FirstStageRocket(9);
        current_f9 = dynamic_cast<Falcon9 *>(f9_factory->createFalcon(fsr));
        falcon_standby(current_f9, 0, fsr);
    }
    else if(input == 2)
    {
        if(f9_fsr_count > 0)
        {
            FirstStageRocket* fsr = f9_fsr.back();
            f9_fsr.pop_back();
            f9_fsr_count--;
            current_f9 = dynamic_cast<Falcon9 *>(f9_factory->createFalcon(fsr));
            cout << f9_fsr_count << " Falcon Nine First Stage Rockets remaining" << endl;
            falcon_standby(current_f9, 0, fsr);
        }
        else
        {
            cout << "No existing falcon nine first stage rockets available" << endl;
            falcon9factory();
        }


    }
    else
    {
        cout << "invalid choice" << endl;
        falcon9factory();
    }



}

void Simulation::falconHeavyfactory()
{
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Please select an option" << endl;
    cout << "1 -- Create new first stage rocket" << endl;
    cout << "2 -- Use existing first stage rocket" << endl;
    cout << "---------------------------------------------------------------------" << endl;

    FalconHeavy* current_fh;

    int input;
    cin >> input;

    if(input == 1)
    {
        FirstStageRocket* fsr = new FirstStageRocket(27);
        current_fh = dynamic_cast<FalconHeavy *>(fheavy_factory->createFalcon(fsr));
        falcon_standby(current_fh, 0, fsr);
    }
    else if(input == 2)
    {
        if(fheavy_fsr_count > 0)
        {
            FirstStageRocket* fsr = fheavy_fsr.back();
            fheavy_fsr.pop_back();
            fheavy_fsr_count--;
            current_fh = dynamic_cast<FalconHeavy *>(fheavy_factory->createFalcon(fsr));
            cout << fheavy_fsr_count << " Falcon Heavy First Stage Rockets remaining" << endl;
            falcon_standby(current_fh, 0, fsr);
        }
        else
        {
            cout << "No existing falcon heavy first stage rockets available" << endl;
            falcon9factory();
        }


    }
    else
    {
        cout << "invalid choice" << endl;
        falcon9factory();
    }
}

void Simulation::falcon_standby(strategy* cr, int sat_count, FirstStageRocket* fsr)
{
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Please select an option" << endl;
    cout << "1 -- load rocket with satellites" << endl;
    cout << "2 -- launch rocket and deploy satellites" << endl;
    cout << "---------------------------------------------------------------------" << endl;

    int input;
    cin >> input;

    if(input == 1)
    {
        loadsats(cr, sat_count, fsr);
    }
    else if(input == 2)
    {
        launch_falcon_command->execute(cr, nullptr);
        f9_fsr.push_back(fsr);
        f9_fsr_count++;
        menu();
    }
    else
    {
        cout << "invalid choice" << endl;
        falcon_standby(cr, sat_count, fsr);
    }

}

void Simulation::loadsats(strategy* cr, int sat_count, FirstStageRocket* fsr)
{
    cout << "---------------------------------------------------------------------" << endl;
    cout << "How many satellites would you like to create? (max 60)" << endl;
    cout << "---------------------------------------------------------------------" << endl;

    int input;
    cin >> input;

    if(input + sat_count > 60 || input < 0)
    {
        cout << "input invalid" << endl;
        falcon_standby(cr, sat_count, fsr);
    }
    else
    {
        for(int i = 0; i < input; i++)
        {
            num_sats++;
            satellite* satellite = sat_fact->create_sat();
            loadSats_command->execute(cr, satellite);

        }
        falcon_standby(cr, input+sat_count, fsr);

    }

}

void Simulation::DragonCrewStandby(DragonCrew* cr)
{
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Please select an option" << endl;
    cout << "1 -- load rocket with crew" << endl;
    cout << "2 -- launch rocket" << endl;
    cout << "---------------------------------------------------------------------" << endl;

    int input;
    cin >> input;

    if(input == 1)
    {
        boardcrew(cr);
    }
    else if(input == 2)
    {
        launch_dragon_command->execute(cr, nullptr);
        Dragons_crew.push_back(cr);
        dragons_in_orbit++;
        menu();
    }
    else
    {
        cout << "invalid choice" << endl;
        DragonCrewStandby(cr);

    }

}

void Simulation::boardcrew(DragonCrew* cr)
{
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Type crew members name" << endl;
    cout << "---------------------------------------------------------------------" << endl;

    string input;
    cin >> input;

    if(cr->checkIfSpace())
    {
        crew* astroboi = new crew(input);
        load_command->execute(cr, astroboi);
        DragonCrewStandby(cr);
    }
    else
    {
        cout << "Dragon Crew rocket is full" << endl;
        DragonCrewStandby(cr);
    }


}

void Simulation::ManageDragons()
{
    if(dragons_in_orbit == 0)
    {
        cout << "No Dragon Rockets Available" << endl;
        menu();
    }
    else
    {
        cout << "---------------------------------------------------------------------" << endl;
        cout << "select a rocket type" << endl;
        cout << "1 -- Crew" << endl;
        cout << "2 -- Cargo" << endl;
        cout << "---------------------------------------------------------------------" << endl;

        int input;
        cin >> input;

        if(input == 1)
        {
            if(Dragons_crew.empty())
            {
                cout << "No Dragon Crew Rockets available" << endl;
                ManageDragons();
            }

            int counter = 0;
            cout << "---------------------------------------------------------------------" << endl;
            cout << "select rocket" << endl;
            vector<DragonCrew*>::iterator dcrew;
            for(dcrew = Dragons_crew.begin(); dcrew != Dragons_crew.end(); ++dcrew)
            {
                counter++;
                cout << counter << " -- Dragon Crew Rocket No. " << counter << endl;
            }
            cout << "---------------------------------------------------------------------" << endl;

            cin >> input;

            if(input < 1 || input > counter)
            {
                cout << "invalid choice" << endl;
                ManageDragons();
            }
            else
            {
                DCrewOrbit(Dragons_crew.data()[counter-1]);
            }


        }
        else if(input == 2)
        {
            if(Dragons_cargo.empty())
            {
                cout << "No Dragon Cargo Rockets available" << endl;
                ManageDragons();
            }

            int counter = 0;
            cout << "---------------------------------------------------------------------" << endl;
            cout << "select rocket" << endl;
            vector<DragonCargo*>::iterator dcargo;
            for(dcargo = Dragons_cargo.begin(); dcargo != Dragons_cargo.end(); ++dcargo)
            {
                counter++;
                cout << counter << " -- Dragon Cargo Rocket No. " << counter << endl;
            }
            cout << "---------------------------------------------------------------------" << endl;

            cin >> input;

            if(input < 1 || input > counter)
            {
                cout << "invalid choice" << endl;
                ManageDragons();
            }
            else
            {
                DCargoOrbit(Dragons_cargo.data()[counter-1]);
            }
        }
        else
        {
            cout << "invalid choice" << endl;
            ManageDragons();
        }

    }

}

void Simulation::DCrewOrbit(DragonCrew* cr)
{

    if(cr->docked == false)
    {
        cout << "---------------------------------------------------------------------" << endl;
        cout << "select an option" << endl;
        cout << "1 -- Attach to ISS and drop off crew" << endl;
        cout << "2 -- return to menu" << endl;
        cout << "---------------------------------------------------------------------" << endl;

        int input;
        cin >> input;

        if(input == 1)
        {
            if(iss->getDockedState()->getstate() == false)
            {
                attach_command->execute(cr, nullptr);
                cr->docked = true;
                unload_command->execute(cr, nullptr);
                menu();
            }
            else
            {
                cout << "another rocket is currently docked" << endl;
                menu();
            }
        }
        else if(input == 2)
        {
            menu();
        }
        else
        {
            cout << "invalid choice" << endl;
            DCrewOrbit(cr);
        }

    }
    else
    {
        cout << "---------------------------------------------------------------------" << endl;
        cout << "select an option" << endl;
        cout << "1 -- Detach and return to earth" << endl;
        cout << "2 -- return to menu" << endl;
        cout << "---------------------------------------------------------------------" << endl;

        int input;
        cin >> input;

        if(input == 1)
        {
            detach_command->execute(cr, nullptr);
            cout << "Dragon Crew Rocket has burnt up in earth's atmosphere" << endl;

            vector<DragonCrew*>::iterator iter;
            iter = Dragons_crew.begin();
            for(int i = 0; i < Dragons_crew.size(); i++)
            {

                if((*iter) == cr)
                {
                    Dragons_crew.erase(iter);
                    dragons_in_orbit--;
                }
                iter++;

            }

            cr->docked = false;
            menu();
        }
        else if(input == 2)
        {
            menu();
        }
        else
        {
            cout << "invalid choice" << endl;
            DCrewOrbit(cr);
        }
    }

}

void Simulation::DragonCargoStandby(DragonCargo * cr)
{
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Please select an option" << endl;
    cout << "1 -- load rocket with cargo" << endl;
    cout << "2 -- launch rocket" << endl;
    cout << "---------------------------------------------------------------------" << endl;

    int input;
    cin >> input;

    if(input == 1)
    {
        loadcargo(cr);
    }
    else if(input == 2)
    {
        launch_dragon_command->execute(cr, nullptr);
        Dragons_cargo.push_back(cr);
        dragons_in_orbit++;
        menu();
    }
    else
    {
        cout << "invalid choice" << endl;
        DragonCargoStandby(cr);

    }
}

void Simulation::loadcargo(DragonCargo *cr)
{
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Type cargo name" << endl;
    cout << "---------------------------------------------------------------------" << endl;

    string input;
    cin >> input;

    if(cr->checkIfSpace())
    {
        cargo* astros = new cargo(input);
        load_command->execute(cr, astros);
        DragonCargoStandby(cr);
    }
    else
    {
        cout << "Dragon Cargo rocket is full" << endl;
        DragonCargoStandby(cr);
    }

}

void Simulation::DCargoOrbit(DragonCargo *cr)
{
    if(cr->docked == false)
    {
        cout << "---------------------------------------------------------------------" << endl;
        cout << "select an option" << endl;
        cout << "1 -- Attach to ISS and drop off cargo" << endl;
        cout << "2 -- return to menu" << endl;
        cout << "---------------------------------------------------------------------" << endl;

        int input;
        cin >> input;

        if(input == 1)
        {
            if(iss->getDockedState()->getstate() == false)
            {
                attach_command->execute(cr, nullptr);
                cr->docked = true;
                unload_command->execute(cr, nullptr);
                menu();
            }
            else
            {
                cout << "another rocket is currently docked" << endl;
                menu();
            }
        }
        else if(input == 2)
        {
            menu();
        }
        else
        {
            cout << "invalid choice" << endl;
            DCargoOrbit(cr);
        }

    }
    else
    {
        cout << "---------------------------------------------------------------------" << endl;
        cout << "select an option" << endl;
        cout << "1 -- Detach and return to earth" << endl;
        cout << "2 -- return to menu" << endl;
        cout << "---------------------------------------------------------------------" << endl;

        int input;
        cin >> input;

        if(input == 1)
        {
            detach_command->execute(cr, nullptr);
            cout << "Dragon Cargo Rocket has burnt up in earth's atmosphere" << endl;

            vector<DragonCargo*>::iterator iter;
            iter = Dragons_cargo.begin();
            for(int i = 0; i < Dragons_cargo.size(); i++)
            {

                if((*iter) == cr)
                {
                    Dragons_cargo.erase(iter);
                    dragons_in_orbit--;
                }
                iter++;

            }
            cr->docked = false;

            menu();
        }
        else if(input == 2)
        {
            menu();
        }
        else
        {
            cout << "invalid choice" << endl;
            DCargoOrbit(cr);
        }
    }
}

void Simulation::ManageSats()
{
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Please select an option" << endl;
    cout << "1 -- show Satellites" << endl;
    cout << "2 -- shutdown Satellite" << endl;
    cout << "3 -- revive Satellite" << endl;
    cout << "4 -- return to menu" << endl;

    cout << "---------------------------------------------------------------------" << endl;

    int input;
    cin >> input;

    if(input == 1)
    {
        Iterator* sat_it = agg->createIterator();
        while(!sat_it->done())
        {
            cout << sat_it->current()->getName() << endl;
            sat_it->next();
        }
        cout << sat_it->current()->getName() << endl;

        ManageSats();

    }
    else if (input == 2)
    {
        cout << "---------------------------------------------------------------------" << endl;
        cout << "select a satellite to shut down eg. 5" << endl;
        cout << "---------------------------------------------------------------------" << endl;

        int input;
        cin >> input;

        if(input < 0 || input > num_sats)
        {
            cout << "invalid satellite" << endl;
            ManageSats();
        }


        Iterator* sat_it = agg->createIterator();
        for(int i = 1; i < input; i++)
        {
            sat_it->next();
        }

        if(sat_it->current()->getS0() == false)
        {
            cout << "satellite is already offline" << endl;
        }
        else
        {
            sat_it->current()->setSOandUpdate(false);
        }


        menu();

    }
    else if(input == 3)
    {
        cout << "---------------------------------------------------------------------" << endl;
        cout << "select a satellite to revive eg. 5" << endl;
        cout << "---------------------------------------------------------------------" << endl;

        int input;
        cin >> input;

        if(input < 0 || input > num_sats)
        {
            cout << "invalid satellite" << endl;
            ManageSats();
        }


        Iterator* sat_it = agg->createIterator();
        for(int i = 1; i < input; i++)
        {
            sat_it->next();
        }

        if(sat_it->current()->getS0() == true)
        {
            cout << "satellite is already online" << endl;
        }
        else
        {
            sat_it->current()->setSOandUpdate(true);
        }
        menu();


    }
    else if(input == 4)
    {
        menu();
    }
    else
    {
        cout << "invalid choice" << endl;
    }

}








