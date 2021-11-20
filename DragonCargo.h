#ifndef __DRAGONCARGO_H__
#define __DRAGONCARGO_H__

#include "dragon_template.h"
#include "cargo.h"
#include "vector"
#include "ISS.h"

using namespace std;
/**
 * @brief DragonCargo class. Inherited from dragon_template
 * Uses the Template method design pattern
 * 
 * Contains two integer variables, a vector of cargoHold and an ISS object which are all private
 */

class DragonCargo : public dragon_template
{
private:

    int size;
    int loaded;
    vector<cargo*> cargoHold;
    ISS* destination;

public:
    /**
     * @brief Construct a new Dragon Cargo object
     * Constructor for the DragonCargo class.
     * Initialises variables size, loaded and destination.
     * @param dest
     * @return nothing
     */
    DragonCargo(ISS *dest);

    /**
     * @brief Destroy the Dragon Cargo object
     * Deconstructor for the DragonCargo class
     * @return nothing
     */
    ~DragonCargo();

    /**
     * @brief Overriden checkIfSpace function.
     * 
     * Function checks if there is enough space for cargo to be loaded into the rocket
     * Uses the template method design pattern
     * 
     * @return true 
     * @return false 
     *
     * @see dragon_template class
     */
    bool checkIfSpace() override;


    /**
     * @brief Overriden loadIn function
     * Function loads in cargo into the rocket.
     * Uses the template method design pattern
     * 
     * @param s
     * @return nothing
     * @see dragon_template class
     */
    void loadIn(storage* s) override;

    /**
     * @brief Overriden unload function
     * Function unloads cargo from the rocket.
     * Uses the template method design pattern
     * 
     * @return nothing
     * @see dragon_template class
     */
    void unload() override;

    /**
     * @brief Overriden launch function
     * Function launches the rocket with the loaded cargo inside. 
     * Uses the template method design pattern
     * 
     * @return nothing
     * @see dragon_template class
     */
    void launch() override;

    /**
     * @brief Overriden getDest function
     * Function gets the destination of the rocket loaded with cargo
     * Uses the template method design pattern
     * 
     * @return ISS* object
     * @see dragon_template class
     */
    ISS* getDest() override;

};

#endif // __DRAGONCARGO_H__