//Delete before prod: Just a basic class structure

#ifndef __CARGO_H__
#define __CARGO_H__

#include "storage.h"

using namespace std;

class cargo : public storage
{
private:
    string name;

public:
    cargo(string s);
    ~cargo();
    string getName();
    void setName(string inS);
};

#endif // __CARGO_H__