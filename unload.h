//
// Created by micha on 2021/11/16.
//

#ifndef UNLOAD_H
#define UNLOAD_H

#include "DragonCommand.h"

using namespace std;

class unload : public DragonCommand
{
private:
public:

    unload();
    ~unload();
    void execute(dragon_template* , storage*) override;

};

#endif // LOAD_H
