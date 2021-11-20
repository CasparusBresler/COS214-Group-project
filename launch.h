#include "falcon_command.h"

///This class is responsible for the launch of the rockets of type falcon
///
///
class launch : public falcon_command
{
private:
public:

/// This is the launch Constructor.
/// 
///
    launch();


/// This is the launch deconstructor.
/// 
///
    ~launch();


/// This is the execute function.
/// 
/// This is used to excute a command and is a part of the command design pattern
///@param r is an object of type strategy
///@param s is an object of type satellite
///@return Nothing
    void execute(strategy *r, satellite *s);
};
