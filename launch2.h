//
// Created by micha on 2021/11/16.
//

#ifndef UNTITLED24_LAUNCH2_H
#define UNTITLED24_LAUNCH2_H



#include "DragonCommand.h"

using namespace std;

///This class is responsible for the launch of the rockets of type dragon
///
///
class launch2 : public DragonCommand
{
private:
public:
/// This is the launch2 Constructor.
/// 
///
    launch2();
    /// This is the launch2 deconstructor.
/// 
///
    ~launch2();
    /// This is the execute function.
/// 
/// This is used to excute a command and is a part of the command design pattern
///@param r is an object of type dragon_template
///@param s is an object of type satellite
///@return Nothing
    void execute(dragon_template* , storage*) override;

};


#endif //UNTITLED24_LAUNCH2_H
