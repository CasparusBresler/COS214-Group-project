//
// Created by micha on 2021/11/16.
//

#ifndef __DRAGONCARGO_FACTORY_H__
#define __DRAGONCARGO_FACTORY_H__

#include "DragonCargo.h"
#include "dragon_factory.h"

using namespace std;

/**
 * @brief dragonCargo_factory class, inherited from dragon_factory
 * Uses the Factory method design pattern
 * 
 */

class dragonCargo_factory : public dragon_factory
{
private:
public:
        /**
     * @brief Construct a new dragonCargo_factory object
     * Constructor of dragonCargo_factory class
     * 
     * @return nothing
     */
    dragonCargo_factory();
    
        /**
     * @brief Destroy the dragonCargo factory object
     * 
     * Destructor of dragonCargo_factory class
     * 
     * @return nothing
     */
    ~dragonCargo_factory();
    
        /**
     * @brief Create a Dragon object
     * 
     * A subclass of the Factory design pattern
     * Creates a new dragon object
     * 
     * @see dragon_factory
     * @param iss 
     * @return dragon_template* 
     * 
     * @see dragon_factory class
     */
    dragon_template *createDragon(ISS*) override;

};

#endif // __DRAGONCARGO_FACTORY_H__
