//
// Created by micha on 2021/11/08.
//

#ifndef ITERATOR_H
#define ITERATOR_H

#include <vector>

class satellite;

using namespace std;
/// This class is the Iterator of the satellities
///
///It has a vector of object type satellite,  and  an integer which indicates the position of the Iterator
class Iterator
{
private:
    vector<satellite *> satellites;
    int pos;

public:
/// This is the Iterator Constructor.
/// 
///
    Iterator(vector<satellite *>);
    
/// This is the first function.
/// 
///This used to find the first element of the vector 
/// @return object of type satellite
    satellite *first();
    
/// This is the next function.
/// 
///This used to find the next element of the vector 
/// @return object of type satellite  
    satellite *next();
    
/// This is the current function.
/// 
///This used to find the current element of the vector 
/// @return object of type satellite
    satellite *current();
    
/// This is the done function.
/// 
///This used to determine if the vector has reached the end of the vector
/// @return bool value
    bool done();
    
/// This is the update function.
/// 
///This used to update the system_online of the satellite
/// @param tf a bool value passed in.
/// @return nothing
    void update(bool);
    
    
    vector<satellite *>getSats();
};

#endif //ITERATOR_H
