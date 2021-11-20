//
// Created by micha on 2021/11/16.
//

#ifndef __DRAGON_TEMPLATE_H__
#define __DRAGON_TEMPLATE_H__

#include "storage.h"
#include "ISS.h"

using namespace std;

class dragon_template
{
private:

public:
    dragon_template();
    ~dragon_template();
    virtual bool checkIfSpace()=0;
    virtual void loadIn(storage*)=0;
    virtual void unload()=0;
    virtual void launch() = 0;
    virtual ISS* getDest() = 0;

};

#endif // __DRAGON_TEMPLATE_H__