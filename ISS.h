//Daniel de Nobrega

#ifndef __ISS_H__
#define __ISS_H__

#include "crew.h"
#include "cargo.h"
#include "docked_state.h"
#include "ISSMemento.h"
#include "vector"

using namespace std;

/// This class represents the international space station 
///
///It has a vector of object type crew, vector of object type cargo and  an object of type docked_state which are all private.

class ISS
{
private:
    vector<crew *> crewmembers;
    vector<cargo *> cargohold;
    docked_state *state;

public:
    /// This is the ISS Constructor.
    /// 
    ///
    ISS();
    
    /// This is the ISS deconstructor.
    /// 
    ///
    ~ISS();
    
    /// This is the setMemento function.
    ///
    /// This used to set the Memento and is a part of the memento design pattern
    /// @param m  is of type ISSMemento
    /// @return nothing
    /// @see createMemento()
    void setMemento(ISSMemento *m);
    
    /// This is the createMemento function.
    ///
    /// This used to create the Memento and is a part of the memento design pattern
    /// @return an object of type ISSMemento
    /// @see setMemento()
    ISSMemento *createMemento();
    
    /// This is the setState function.
    ///
    /// This used to set the State and is a part of the State design pattern
    /// @param state  is of type docked_state
    /// @return nothing 
    /// @see changeState() 
    void setState(docked_state *state);
        
    /// This is the changeState function.
    ///
    /// This used to change the State and is a part of the State design pattern
    /// @return nothing 
    /// @see setState() 
    void changeState();
    
    /// This is the getCargo funcion.
    ///
    /// This used as an accessor method to private member cargohold
    /// @return vector of object type cargo 
    vector<cargo*> getCargo();
    
    /// This is the getCrew funcion.
    ///
    /// This used as an accessor method to private member crewmembers
    /// @return vector of object type crew 
    vector<crew*> getCrew();

    /// This is the getDockedState funcion.
    ///
    /// This used as an accessor method to private member crewmembers
    /// @return an object of type docked_state
    docked_state *getDockedState();

    void setCrew(vector<crew *> vector);

    void setCargo(vector<cargo *> vector);
};

#endif // __ISS_H__
