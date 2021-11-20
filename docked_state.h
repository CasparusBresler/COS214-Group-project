//Daniel de Nobrega

#ifndef __DOCKED_STATE_H__
#define __DOCKED_STATE_H__

using namespace std;

/**
 * @brief new class docked_state
 * Uses the State design pattern
 */
class docked_state
{
private:

public:

    /**
     * @brief Construct a new docked_state object
     * Constructor for the docked_state class
     * @return nothing
     */
    docked_state(/* args */);

    /**
     * @brief Destroy the docked_state object
     * Deconstructor for the docked_state class
     * @return nothing
     */
    ~docked_state();

    /**
     * @brief virtual getstate function for the docked_state class
     * Implemented in subclasses
     * Uses the State design pattern
     * @see docked class
     * @return true 
     * @return false 
     */
    virtual bool getstate() = 0;

    /**
     * @brief virtual changestate function for the docked_state class
     * Implemented in subclasses
     * Uses the State design pattern
     * @see docked class
     * @return docked_state* 
     */
    virtual docked_state *changestate() = 0;

    /**
     * @brief virtual clone function for the docked_state class
     * Implemented in subclasses
     * Uses the Prototype design pattern as well as the State design pattern
     * Used to clone a new docked_state object in its subclasses
     * 
     * @return docked_state* 
     */
    virtual docked_state* clone() = 0;
};
#endif // __DOCKED_STATE_H__