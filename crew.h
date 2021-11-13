//Delete before prod: Just a basic class structure

#ifndef __CREW_H__
#define __CREW_H__

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
    void setName(string inS);
    crew* clone();
};

#endif // __CREW_H__