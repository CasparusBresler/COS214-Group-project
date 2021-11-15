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
};

#endif //CREW_H