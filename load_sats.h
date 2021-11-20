#include "falcon_command.h"


///This class is responsible for the loading satellites on to the rockets of type falcon
///
///
class load_sats : public falcon_command
{
private:

public:
/// This is the load_sats Constructor.
/// 
///
    load_sats();

/// This is the load_sats deconstructor.
/// 
///
    ~load_sats();

/// This is the execute function.
/// 
/// This is used to excute a command and is a part of the command design pattern
///@param r is an object of type strategy
///@param s is an object of type satellite
///@return Nothing
    void execute(strategy * r, satellite * s);
};


