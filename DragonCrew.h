//Rachel Hamilton and Regan Shen
#ifndef __DRAGONCREW_H__
#define __DRAGONCREW_H__

#include "dragon_template.h"
using namespace std;

class DragonCrew : public dragon_template
{
private:
crew** passengers;
ISS* destination;
public:
    DragonCrew();
    ~DragonCrew();
    void unLoad() override;
    bool checkIfSpace() override;
    void loadIn(storage*) override;
    
};

#endif // __DRAGONCREW_H__