//Rachel Hamilton and Regan Shen
#ifndef CARGO_H
#define CARGO_H

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
    void setName(string word);
};

#endif //CARGO_H