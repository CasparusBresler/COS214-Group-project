//Rachel Hamilton and Regan Shen
#ifndef __DRAGON_TEMPLATE_H__
#define __DRAGON_TEMPLATE_H__

#include "storage.h"
using namespace std;

class dragon_template
{
private:

public:
    dragon_template();
    ~dragon_template();
    void load(storage* s);
    virtual bool checkIfSpace()=0;
    virtual void loadIn(storage*)=0;
    virtual void unLoad()=0;

};

#endif // __DRAGON_TEMPLATE_H__