#include <iostream>
#include <string>
#include "dragon_factory.h"
#include "dragon_template.h"
#include "storage.h"
#include "DragonCommand.h"
#include "dragonCargo_factory.h"
#include "dragonCrew_factory.h"
#include "ISS.h"
#include "DragonCargo.h"
#include "rocket.h"
#include "launch2.h"
#include "load.h"
#include "attach.h"
#include "detach.h"
#include "unload.h"
#include "storage.h"
#include "docked_state.h"
#include "undocked.h"
#include "docked.h"
#include "ISSMemento.h"

void TestIss();

using namespace std;
int main() {
    ISS* iss = new ISS();
    docked_state* ds = new undocked();
    iss->setState(ds);
    //cout<<iss->getDockedState()->getstate()<<endl;
    dragon_factory* factory[2];
    factory[0] = new dragonCargo_factory();
    factory[1] = new dragonCrew_factory();
    dragon_template** rockets = new dragon_template*[2];
    rockets[0] = factory[0]->createDragon(iss);
    rockets[1] = factory[1]->createDragon(iss);

    storage *storage[2];
    storage[0] = new cargo("Food for ISS");
    storage[1] = new cargo("Blankets for ISS");



    //Creating the commands
     DragonCommand* loadCommand = new  load();
    DragonCommand* unloadCommand = new unload();
     DragonCommand* attachCommand = new attach();
     DragonCommand* detachCommand = new detach();
     DragonCommand* launchCommand = new launch2();

    cout<<"Loading to Dragon Cargo rocket"<< endl;
    loadCommand->execute(rockets[0],*storage);
    cout<<"Launching the Dragon Cargo Rocket"<< endl;
    launchCommand->execute(rockets[0], *storage);
    cout<<"The Dragon Cargo is in space and is now attching to the ISS"<<endl;
    attachCommand->execute(rockets[0],*storage);
    cout<<"The Dragon Cargo is attched and is now un loading all its cargo"<<endl;
    unloadCommand->execute(rockets[0],*storage);
    cout<<"Inside ISS"<<endl;
    cout<<"The Dragon Cargo is fully unloaded and is now heading back down to earth"<<endl;
    detachCommand->execute(rockets[0],*storage);


    storage[0] = new crew("Bob");
    storage[1] = new crew("Frank");

    cout<<"Crew is entering Dragon"<< endl;
    loadCommand->execute(rockets[0],*storage);
    cout<<"Launching the Dragon Crew Rocket"<< endl;
    launchCommand->execute(rockets[0], *storage);
    cout<<"The Dragon Crew is in space and is now attching to the ISS"<<endl;
    attachCommand->execute(rockets[0],*storage);
    cout<<"The Dragon Cargo is attched and the crew is going in the ISS"<<endl;
    unloadCommand->execute(rockets[0],*storage);
    cout<<"The Dragon Cargo is fully unloaded and is now heading back down to earth"<<endl;
    detachCommand->execute(rockets[0],*storage);


    delete iss;
    //elete ds;
    for (int i = 0; i<2;i++)
    {
        delete factory[i];
    }
    for (int i = 0; i<2;i++)
    {
        delete storage[i];
    }
    for (int i = 0; i<2;i++)
    {
        delete rockets[i];
    }

    TestIss();
    return 0;
}

void TestIss() {
    ISS* iss = new ISS();
    docked_state* ds = new undocked();
    iss->setState(ds);
    dragon_factory* factory;
    factory = new dragonCargo_factory();

    dragon_template** rockets = new dragon_template*[2];
    rockets[0] = factory->createDragon(iss);

    storage *storage[2];
    storage[0] = new cargo("Food for ISS");
    storage[1] = new cargo("Blankets for ISS");



    //Creating the commands
    DragonCommand* loadCommand = new  load();
    DragonCommand* unloadCommand = new unload();
    DragonCommand* attachCommand = new attach();
    DragonCommand* detachCommand = new detach();
    DragonCommand* launchCommand = new launch2();

    cout<<"Loading to Dragon Cargo rocket"<< endl;
    loadCommand->execute(rockets[0],*storage);
    cout<<"Launching the Dragon Cargo Rocket"<< endl;
    launchCommand->execute(rockets[0], *storage);
    cout<<"The Dragon Cargo is in space and is now attching to the ISS"<<endl;
    attachCommand->execute(rockets[0],*storage);
    cout<<"The Dragon Cargo is attched and is now un loading all its cargo"<<endl;
    unloadCommand->execute(rockets[0],*storage);
    cout<<"Inside ISS"<<endl;
    ISSMemento* memento = iss->createMemento();
    cout<<"Memento created"<<endl;
    iss->setMemento(memento);
    //cout << "hello" << endl;

    //cout<<"The Dragon Cargo is fully unloaded and is now heading back down to earth"<<endl;
    //detachCommand->execute(rockets[0],*storage);
   // delete memento;
   // delete iss;
   // delete ds;

//        delete factory;
//
//    for (int i = 0; i<2;i++)
//    {
//        delete storage[i];
//    }
//    for (int i = 0; i<2;i++)
//    {
//        delete rockets[i];
//    }

}






