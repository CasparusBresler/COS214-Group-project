//
// Created by micha on 2021/11/16.
//

#include "load.h"

using namespace std;

load::load() : DragonCommand()
{

}

load::~load()
{

}

void load::execute(dragon_template* r , storage* s)
{
    r->loadIn(s);
}