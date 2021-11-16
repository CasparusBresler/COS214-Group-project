//Rachel Hamilton and Regan Shen
#ifndef LAUNCH2_H
#define LAUNCH2_H

#include "DragonCommand.h"

using namespace std;

class launch2 : public DragonCommand
{
private:
public:

launch2();
~launch2();
void execute(template* , storage*) override;

};

#endif // LAUNCH_2