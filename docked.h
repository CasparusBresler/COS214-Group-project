//Daniel de Nobrega

#ifndef __DOCKED_H__
#define __DOCKED_H__

#include "docked_state.h"
#include "undocked.h"

using namespace std;

/**
 * @brief new docked class
 * Inherited from docked_state
 * Uses the state design pattern
 * 
 */

class docked : public docked_state
{
private:
    bool dock_state;
public:

/**
     * @brief Construct a new docked object
     * Constructor for the docked class
     * @return nothing 
     */
    docked(/* args */);


    /**
     * @brief Destroy the docked object
     * Destructor for the docked state
     * @return nothing
     */
    ~docked();

    /**
     * @brief function to change the state of the docked state
     * 
     * @return docked_state* 
     * @see docked_state class 
     */
    docked_state* changestate();

    /**
     * @brief getstate function for the docked class
     * Function that gets the state and returns it
     * @see docked_state class
     * 
     * @return true 
     * @return false 
     */
    bool getstate();

    /**
     * @brief clone function for the docked class
     * Uses the Prototype design pattern
     * 
     * @see docked_state class
     * @return docked_state* 
     */
    docked_state* clone();
};
#endif // __DOCKED_H__