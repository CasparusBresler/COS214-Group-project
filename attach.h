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
    void execute(dragon_template* , storage*) override;

};

#endif // ATTACH