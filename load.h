#ifndef LOAD_H
#define LOAD_H

#include "DragonCommand.h"

using namespace std;

class load : public DragonCommand
{
private:
public:

    load();
    ~load();
    void execute(dragon_template* , storage*) override;

};

#endif // LOAD_H