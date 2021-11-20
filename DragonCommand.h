//
// Created by micha on 2021/11/16.
//

#ifndef DRAGONCOMMAND_H
#define DRAGONCOMMAND_H


#include "dragon_template.h"
#include "storage.h"
using namespace std;

/**
 * @brief DragonCommand class, inherited from dragon_template
 * Uses the Template method design pattern as well as the Command design pattern
 */

class DragonCommand : public dragon_template
{
private:
public:

    /**
     * @brief Construct a new Dragon Command object
     * Constructor for DragonCommand class
     * 
     * @return nothing
     */
    DragonCommand();

    /**
     * @brief Destroy the Dragon Command object
     * Destructor for DragonCommand class
     * 
     * @return nothing
     */
    ~DragonCommand();

    /**
     * @brief virtual execute function for dragonCommand
     * Implemented in subclasses
     * @param dt
     * @param s
     * 
     * @return nothing
     * @see attach class
     * @see dragon_template class
     * @see detach class
     * @see attach class
     */
    virtual void execute(dragon_template* dt, storage* s)=0;



};

#endif // DRAGONCOMMAND_H
