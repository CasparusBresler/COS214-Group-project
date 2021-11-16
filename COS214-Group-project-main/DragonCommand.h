//Rachel Hamilton and Regan Shen
#ifndef DRAGONCOMMAND_H
#define DRAGONCOMMAND_H


#include "dragon_template.h"
#include "storage.h"
using namespace std;

class DragonCommand : public dragon_template
{
private:
public:
    DragonCommand();
    ~DragonCommand();
   virtual void execute(template* , storage*)=0;

    
  
};

#endif // DRAGONCOMMAND_H