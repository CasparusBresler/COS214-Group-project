//
// Created by micha on 2021/11/16.
//

#include "launch2.h"

using namespace std;

launch2::launch2() : DragonCommand()
{

}

launch2::~launch2()
{

}

void launch2::execute(dragon_template* r , storage* s)
{
    r->launch();
}