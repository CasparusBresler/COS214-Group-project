//Daniel de Nobrega

#ifndef __SPACES_STATIONS_H__
#define __SPACES_STATIONS_H__

#include "ISSMemento.h"

using namespace std;
///This is the space_stations class wihich represents the International space station
///
///It has an object of type ISSMemento as a private member
class space_stations
{
private:
    ISSMemento* spst;
public:
    /// This is the rocket Constructor.
    ///
    /// 
    space_stations(/* args */);

    /// This is the rocket deconstructor.
    ///
    /// 
    ~space_stations();

/// This is the getSpst funcion.
///
/// This used as an accessor method to private member spst
/// @return an integer
/// @see setSpst()
    ISSMemento* getSpst();

/// This is the setSpst funcion.
///
/// This used as an accessor method to private member speed
/// @param set is an integer that will set the ISSMemento
/// @return nothing
/// @see getSpst()
    void setSpst(ISSMemento* set);
};



#endif // __SPACES_STATIONS_H__