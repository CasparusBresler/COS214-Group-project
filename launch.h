#ifndef __LAUNCH_H__
#define __LAUNCH_H__

#include "falcon_command.h"

class launch : public falcon_command
{
private:
public:
    launch();
    ~launch();
    void execute(strategy *r, satellite *s) override;
};

#endif // __LAUNCH_H__