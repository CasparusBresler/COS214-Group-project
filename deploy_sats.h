#ifndef __DEPLOY_SATS_H__
#define __DEPLOY_SATS_H__

#include "falcon_command.h"

/**
 * @brief new deploy_sats class, inherited from the falcon_command class
 * 
 */
class deploy_sats : public falcon_command
{
private:
public:

    /**
     * @brief Construct a new deploy sats object
     * Constructor for the deploy_sats class
     * @return nothing
     */
    deploy_sats();
    
    /**
     * @brief Destroy the deploy sats object
     * Deconstructor for the deploy_sats class
     * @return nothing
     */
    ~deploy_sats();
    
    /**
     * @brief execute function for deploy_sats class
     * 
     * @see falcon_command class
     * @param r 
     * @param s 
     */
    void execute(strategy *r, satellite *s);
};

#endif // __DEPLOY_SATS_H__
