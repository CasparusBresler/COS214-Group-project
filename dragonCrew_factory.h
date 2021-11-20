//
// Created by micha on 2021/11/16.
//

#ifndef __DRAGONCREW_FACTORY_H__
#define __DRAGONCREW_FACTORY_H__

#include "DragonCrew.h"
#include "dragon_factory.h"
using namespace std;

/**
 * @brief dragonCrew_factory class, inherited from dragon_factory
 * Uses the Factory method design pattern
 * 
 */

class dragonCrew_factory : public dragon_factory
{
private:
public:
    /**
     * @brief Construct a new dragonCrew factory object
     * Constructor function for dragonCrew_factory
     * @return nothing
     */
    dragonCrew_factory();

    /**
     * @brief Destroy the dragonCrew factory object
     * Deconstructor function for dragonCrew_factory
     * @return nothing
     */
    ~dragonCrew_factory();

    /**
     * @brief Create a Dragon object
     * 
     * A subclass of the Factory design pattern
     * Creates a new dragon object
     * 
     * @param iss 
     * @return dragon_template* 
     * @see dragon_factory class
     */
    dragon_template *createDragon(ISS *iss);
};

#endif // __DRAGONCREW_FACTORY_H__