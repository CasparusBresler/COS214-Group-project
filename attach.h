#ifndef ATTACH_H
#define ATTACH_H

#include "DragonCommand.h"

using namespace std;

/**
 * @brief new class attach, inherited from the DragonCommand class
 * Uses the Template method design pattern
 */

class attach : public DragonCommand
{
private:
public:

    /**
     * @brief Construct a new attach object
     * Constructor for the attach class
     * @return nothing
     */
    attach();


    /**
     * @brief Destroy the attach object
     * Destructor for the attach class
     * @return nothing
     */
    ~attach();

    /**
     * @brief Overridden execute function of attach class
     * Subclass in Template method design pattern
     * @return nothing
     * @see DragonCommand class
     * @param dt dt is of type dragon_template*
     * @param s s is of type storage*
     */
    void execute(dragon_template* dt , storage* s) override;

};

#endif // ATTACH