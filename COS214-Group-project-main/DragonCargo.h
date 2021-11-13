//Rachel Hamilton and Regan Shen
#ifndef __DRAGONCARGO_H__
#define __DRAGONCARGO_H__

#include "dragon_template.h"
using namespace std;

class DragonCargo : public dragon_template
{
private:
cargo** cargoHold;
ISS* destination;

public:
    DragonCargo();
    ~DragonCargo();
    bool checkIfSpace() override;
    void loadIn(storage*) override;
    void unLoad() override;

};

#endif // __DRAGONCARGO_H__