//Daniel de Nobrega

#ifndef __SPACES_STATIONS_H__
#define __SPACES_STATIONS_H__

#include "ISSMemento.h"

using namespace std;

class space_stations
{
private:
    ISSMemento* spst;
public:
    space_stations(/* args */);
    ~space_stations();
    ISSMemento* getSpst();
    void setSpst(ISSMemento* set);
};



#endif // __SPACES_STATIONS_H__