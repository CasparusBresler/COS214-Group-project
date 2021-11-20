#ifndef LOAD_H
#define LOAD_H

#include "DragonCommand.h"

using namespace std;

///This class is responsible for the loading storage on to the rockets of type dragon
///
///
class load : public DragonCommand
{
private:
public:

/// This is the load Constructor.
/// 
///
    load();
    /// This is the load deconstructor.
/// 
///
    ~load();
    /// This is the execute function.
/// 
/// This is used to excute a command and is a part of the command design pattern
///@param r is an object of type dragon_template
///@param s is an object of type storage
///@return Nothing
    void execute(dragon_template* , storage*) override;

};

#endif // LOAD_H
