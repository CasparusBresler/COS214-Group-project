//
// Created by micha on 2021/11/16.
//

#ifndef CARGO_H
#define CARGO_H

#include "storage.h"

using namespace std;

/**
 * @brief new class cargo, inherited from storage class
 * Takes in a string which is declared privately
 * @see crew class
 */
class cargo : public storage
{
private:

    string name;
public:
    /**
     * @brief Construct a new cargo object
     * Constructor for cargo class
     * Initializes string name which is declared privately
     * @return nothing
     * @param s 
     */
    cargo(string s);
    
    /**
     * @brief Destroy the cargo object
     * Destructor for cargo class
     * @return nothing
     */
    ~cargo();
    
    /**
     * @brief Get the Name object
     * Function to get and return the name of the cargo being stored
     * @return string 
     */
    string getName();
    
    /**
     * @brief Set the Name object
     * Sets the name of the cargo being stored 
     * @return nothing
     * @param word 
     */
    void setName(string word);
    
    /**
     * @brief clone function of cargo class
     * Uses the Prototype design pattern
     * @see crew* clone() - in crew class
     * @return cargo* 
     */
    cargo* clone();
};

#endif //CARGO_H
