//Daniel de Nobrega

#ifndef __ISSMEMENTO_H__
#define __ISSMEMENTO_H__

#include "docked_state.h"
#include "crew.h"
#include "cargo.h"
#include "vector"

using namespace std;
/// This class is the memento the international space station 
///
///It has a vector of object type crew, vector of object type cargo and  an object of type docked_state which are all private.
class ISSMemento
{
private:
    vector<string> crewmembers;
    vector<string> cargohold;
    docked_state* state;

public:
    
/// This is the ISSMemento Constructor.
/// 
///
    ISSMemento(vector<crew*> crewV, vector<cargo*> cargoV, docked_state* ds);
    
/// This is the ISSMemento Deconstructor.
/// 
///
    ~ISSMemento();
    
/// This is the getCrew funcion.
///
/// This used as an accessor method to private member crewmembers
/// @return vector of object type crew 
    vector<string> getcrew();
    
/// This is the getCargo funcion.
///
/// This used as an accessor method to private member cargohold
/// @return vector of object type cargo 
    vector<string> getcargo();
    
/// This is the getDockedState funcion.
///
/// This used as an accessor method to private member crewmembers
/// @return an object of type docked_state
    docked_state* getState();
};
#endif // __ISSMEMENTO_H__
