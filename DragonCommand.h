//
// Created by micha on 2021/11/16.
//

#ifndef DRAGONCOMMAND_H
#define DRAGONCOMMAND_H


#include "dragon_template.h"
#include "storage.h"
using namespace std;

class DragonCommand
{
private:
public:
    DragonCommand();
    ~DragonCommand();
    virtual void execute(dragon_template* , storage*)=0;



};

#endif // DRAGONCOMMAND_H
