//
// Created by micha on 2021/11/16.
//

#ifndef DETACH_H
#define DETACH_H

#include "DragonCommand.h"

using namespace std;
/**
 * @brief new class attach, inherited from the DragonCommand class
 * Uses the Template method design pattern
 */

class detach : public DragonCommand
{
private:
public:

    /**
     * @brief Construct a new detach object
     * Constructor for the detach class
     * @return nothing
     */
    detach();

    /**
     * @brief Destroy the detach object
     * Destructor for the detach class
     * @return nothing
     */
    ~detach();


    /**
     * @brief Overridden execute function of detach class
     * Subclass in Template method design pattern
     * @return nothing
     * @see DragonCommand class
     * @param dt dt is of type dragon_template*
     * @param s s is of type storage*
     */
    void execute(dragon_template* dt , storage* s) override;

};

#endif // LAUNCH_2