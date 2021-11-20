//
// Created by micha on 2021/11/16.
//

#ifndef __DRAGONCREW_H__
#define __DRAGONCREW_H__

#include "dragon_template.h"
#include "crew.h"
#include "vector"
#include "ISS.h"

using namespace std;

/**
 * @brief DragonCrew class inherited from dragon_template
 * Uses template method
 * 
 */

class DragonCrew : public dragon_template
{
private:
    int size;
    int loaded;
    vector<crew*> passengers;
    ISS* destination;
public:
    /**
     * @brief Construct a new Dragon Crew object
     * Constructor for the DragonCrew class.
     * Initialises variables size, loaded and destination.
     * @param dest
     * @return nothing 
     */
    DragonCrew(ISS*);
    
        /**
     * @brief Destroy the Dragon Crew object
     * Deconstructor for the DragonCrew class
     * @return nothing
     */
    ~DragonCrew();
    
     /**
     * @brief Overriden unload function
     * Function unloads the crew from the rocket.
     * Uses the template method design pattern
     * 
     * @return nothing
     * @see dragon_template class
     */
    void unload() override;
    
     /**
     * @brief Overriden checkIfSpace function.
     * 
     * Function checks if there is enough space for the crew to be loaded into the rocket
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
     * Function loads the crew into the rocket.
     * Uses the template method design pattern
     * 
     * @param s
     * @return nothing
     * @see dragon_template class
     */
    void loadIn(storage*) override;
    
     /**
     * @brief Overriden launch function
     * Function launches the rocket with the loaded crew inside. 
     * Uses the template method design pattern
     * 
     * @return nothing
     * @see dragon_template class
     */
    void launch() override;
    
     /**
     * @brief Overriden getDest function
     * Function gets the destination of the rocket loaded with the crew
     * Uses the template method design pattern
     * 
     * @return ISS* object
     * @see dragon_template class
     */
    ISS* getDest() override;

};

#endif // __DRAGONCREW_H__
