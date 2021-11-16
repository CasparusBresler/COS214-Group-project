//
// Created by micha on 2021/11/16.
//

#include "unload.h"

using namespace std;

unload::unload()
{

}

unload::~unload()
{

}

void unload::execute(dragon_template* r , storage* s)
{
    r->unload();
}
