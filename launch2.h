//
// Created by micha on 2021/11/16.
//

#ifndef UNTITLED24_LAUNCH2_H
#define UNTITLED24_LAUNCH2_H



#include "DragonCommand.h"

using namespace std;

class launch2 : public DragonCommand
{
private:
public:
    launch2();
    ~launch2();
    void execute(dragon_template* , storage*) override;

};


#endif //UNTITLED24_LAUNCH2_H
