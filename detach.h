//
// Created by micha on 2021/11/16.
//

#ifndef DETACH_H
#define DETACH_H

#include "DragonCommand.h"

using namespace std;

class detach : public DragonCommand
{
private:
public:

    detach();
    ~detach();
    void execute(dragon_template* , storage*) override;

};

#endif // LAUNCH_2