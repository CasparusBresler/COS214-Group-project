//
// Created by micha on 2021/11/16.
//

#ifndef __DRAGON_TEMPLATE_H__
#define __DRAGON_TEMPLATE_H__

#include "storage.h"
#include "ISS.h"

using namespace std;

/**
 * @brief Dragon Template class.
 * Uses the Template Method design pattern
 */

class dragon_template
{
private:

public:
    /**
     * @brief Construct a new dragon template object
     * dragon_template constructor
     * @return nothing
     * 
     */
    dragon_template();
    
    /**
     * @brief Destroy the dragon template object
     * dragon_template deconstructor
     * @return nothing
     * 
     */
    ~dragon_template();
    
 /**
 * @brief virtual load function of dragon_template
 * Implemented in the concrete classes
 * The load function loads in either cargo or passangers into the rocket
 * @return nothing
 * @param s 
 */
    
    
    
    
    virtual bool checkIfSpace()=0;
    
    
    
    
    
    
       /**
     * @brief virtual loadIn function of dragon_template
     * Implemented in the concrete classes
     * The load function loads in either cargo or passangers into the rocket
     * 
     * @param s
     * 
     * @return nothing
     * 
     * @see dragonCrew class
     * @see dragonCargo class
     * 
     */
    virtual void loadIn(storage*)=0;
    
        /**
     * @brief unload virtual function of dragon_template
     * 
     * Implemented in concrete classes
     * The unload function unlods either cargo or passangers from the rocket
     * 
     * @return nothing
     * 
     * @see dragonCrew class
     * @see dragonCargo class
     * 
     */
    virtual void unload()=0;
    
        /**
     * @brief virtual launch function of dragon_template class
     * Implemented in concrete classes
     * Launches the rocket
     * 
     * @return nothing
     * 
     * @see dragonCrew class
     * @see dragonCargo class
     * 
     */
    virtual void launch() = 0;
    
       /**
     * @brief Virtual getDest function to get the Destination 
     * 
     * @return ISS* 
     * 
     * @see dragonCrew class
     * @see dragonCargo class
     */
    virtual ISS* getDest() = 0;

    bool docked;
};

#endif // __DRAGON_TEMPLATE_H__
