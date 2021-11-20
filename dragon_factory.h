//
// Created by micha on 2021/11/16.
//

#ifndef __DRAGON_FACTORY_H__
#define __DRAGON_FACTORY_H__

#include "dragon_template.h"

using namespace std;

/**
 * @brief Dragon Factory class 
 * Uses the Factory method design pattern.
 */

class dragon_factory
{
private:
public:
        /**
     * @brief Construct a new dragon_factory object
     * This is the dragon_factory constructor function 
     * @return nothing
     */
    dragon_factory();
    
    /**
     * @brief Destroy the dragon_factory object
     * Destructor for dragon_factory class
     * @return nothing
     */
    ~dragon_factory();
    
        /**
     * @brief Create a Dragon object
     * virtual function
     * Uses the Factory design pattern
     * 
     * @return dragon_template* in concrete classes
     * @see dragonCargo_factory
     * @see dragonCrew_factory
     */
    virtual dragon_template *createDragon() = 0;
};

#endif // __DRAGON_FACTORY_H__
