

#include "strategy.h"
#include "satellite.h"

class falcon_command
{
private:
    
public:
   falcon_command();
   virtual ~falcon_command();
   virtual void execute(strategy * r, satellite * s)=0;
};


