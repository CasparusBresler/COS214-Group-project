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
    ISS *iss = new ISS();
    docked_state *ds = new undocked();
    iss->setState(ds);
    dragonCrew_factory *dragon_factory = new dragonCrew_factory();
    DragonCrew *dragonCrew = dynamic_cast<DragonCrew *>(dragon_factory->createDragon(iss));
    crew* crew1 = new crew("alice");
    crew* crew2 = new crew("bob");
    load* load_command = new load;
    load_command->execute(dragonCrew, crew1);

    launch2* launch_command = new launch2;
    launch_command->execute(dragonCrew, nullptr);

    attach* attach_command = new attach;
    attach_command->execute(dragonCrew, nullptr);

    unload* unload_command = new unload;
    unload_command->execute(dragonCrew, nullptr);

    vector<crew*>::iterator iter;

    vector<crew*> temp = iss->getCrew();

    for(iter = temp.begin(); iter != temp.end(); iter++)
    {
        cout << (*iter)->getName() << endl;
    }

    cout << "------------------------------------------" << endl;

    ISSMemento* ffs = iss->createMemento();

    load_command->execute(dragonCrew, crew2);

    unload_command->execute(dragonCrew, nullptr);

    temp = iss->getCrew();

    for(iter = temp.begin(); iter != temp.end(); iter++)
    {
        cout << (*iter)->getName() << endl;
    }

    cout << "--------------------------" << endl;
    iss->setMemento(ffs);
    temp = iss->getCrew();


    for(iter = temp.begin(); iter != temp.end(); iter++)
    {
        cout << (*iter)->getName() << endl;
    }

    detach* detach_command = new detach;

    /*
    detach_command->execute(dragonCrew, nullptr);

    unload_command->execute(dragonCrew, nullptr);
    */






    return 0;
}







