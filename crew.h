//
// Created by micha on 2021/11/16.
//

#ifndef CREW_H
#define CREW_H

#include "storage.h"

using namespace std;

/**
 * @brief new crew class, inherited from the storage class
 * Takes in a string which is declared privately
 * @see cargo class 
 */

class crew : public storage
{
private:
    string name;

public:
    /**
     * @brief Construct a new crew object
     * Constructor for crew class
     * Initializes string name which is declared privately
     * @return nothing
     * @param s 
     */
    crew(string s);
    
     /**
     * @brief Destroy the crew object
     * Destructor for crew class
     * @return nothing
     */
    ~crew();
    
     /**
     * @brief Get the Name object
     * Function to get and return the name of the crew member being stored
     * @return string 
     */
    string getName();
    
     /**
     * @brief Set the Name object
     * Function to set the name of the crew member being stored
     * @return nothing
     * @param word 
     */
    void setName(string word);

     /**
     * @brief cloning function for the crew class
     * Uses the prototype design pattern
     * @see cargo* clone() - in cargo class
     * @return crew* 
     */
    crew* clone();
};

#endif //CREW_H
