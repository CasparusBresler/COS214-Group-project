//
// Created by micha on 2021/11/08.
//

#ifndef AGGREGATE_H
#define AGGREGATE_H

#include "Iterator.h"

using namespace std;
/**
 * @brief Define new class aggregate 
 * Uses the Iterator Design pattern
 * contains a vector of satellites which is defined privately
 */

class aggregate
{
private:
    vector<satellite *> satellites;

public:
     /**
     * @brief Construct a new aggregate object
     * Constructor for aggregate class
     * @return nothing
     * 
     */
    aggregate();
    
      /**
     * @brief Create an Iterator object
     * Uses the Iterator design pattern as well as the Factory Method design pattern to create a new object
     * @return Iterator* 
     */
    Iterator* createIterator();
    
      /**
     * @brief addSat function of aggregate class
     * Takes in parameter s and adds a new satellite to the program
     * @return nothing
     * @param s 
     */
    void addSat(satellite* s);
    
    aggregate *clone();
};


#endif //AGGREGATE_H
