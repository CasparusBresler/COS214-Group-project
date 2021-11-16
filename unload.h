#ifndef UNLOAD_H
#define UNLOAD_H

#include "DragonCommand.h"

using namespace std;

class load : public DragonCommand
{
private:
public:

unload();
~unload();
void execute(template* , storage*) override;

};

#endif // LOAD_H
