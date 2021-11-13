//Rachel Hamilton and Regan Shen
#ifndef ATTACH_H
#define ATTACH_H

#include "DragonCommand.h"

using namespace std;

class attach : public DragonCommand
{
private:
public:

attach();
~attach();
void execute(template* , storage*) override;

};

#endif // ATTACH