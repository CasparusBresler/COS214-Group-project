//Rachel Hamilton and Regan Shen
#ifndef DETACH_H
#define DETACH_H

#include "DragonCommand.h"

using namespace std;

class detach : public DragonCommand
{
private:
public:

detach();
~detach();
void execute(template* , storage*) override;

};

#endif // LAUNCH_2