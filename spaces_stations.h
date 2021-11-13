//Daniel de Nobrega

#ifndef __SPACES_STATIONS_H__
#define __SPACES_STATIONS_H__

#include "ISSMemento.h"

using namespace std;

class spaces_stations
{
private:
    ISSMemento* spst;
public:
    spaces_stations(/* args */);
    ~spaces_stations();
    ISSMemento* getSpst();
    void setSpst(ISSMemento* set);
};



#endif // __SPACES_STATIONS_H__