//
// Created by micha on 2021/11/16.
//

#ifndef __DRAGONCREW_H__
#define __DRAGONCREW_H__

#include "dragon_template.h"
#include "crew.h"
#include "vector"
#include "ISS.h"

using namespace std;

class DragonCrew : public dragon_template
{
private:
    int size;
    int loaded;
    ISS* destination;
public:
    DragonCrew(ISS*);
    ~DragonCrew();
    void unload() override;
    bool checkIfSpace() override;
    void loadIn(storage*) override;
    void launch() override;
    ISS* getDest() override;

    vector<crew*> passengers;
};

#endif // __DRAGONCREW_H__