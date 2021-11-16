//
// Created by micha on 2021/11/16.
//

#ifndef CREW_H
#define CREW_H

#include "storage.h"

using namespace std;

class crew : public storage
{
private:
    string name;

public:
    crew(string s);
    ~crew();
    string getName();
    void setName(string word);
    crew* clone();
};

#endif //CREW_H