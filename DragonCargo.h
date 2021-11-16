#ifndef __DRAGONCARGO_H__
#define __DRAGONCARGO_H__

#include "dragon_template.h"
#include "cargo.h"
#include "vector"
#include "ISS.h"

using namespace std;

class DragonCargo : public dragon_template
{
private:

    int size;
    int loaded;
    vector<cargo*> cargoHold;
    ISS* destination;

public:
    DragonCargo(ISS *dest);
    ~DragonCargo();
    bool checkIfSpace() override;
    void loadIn(storage*) override;
    void unload() override;
    void launch() override;
    ISS* getDest() override;

};

#endif // __DRAGONCARGO_H__