#include "falcon_command.h"
class launch : public falcon_command
{
private:
public:
    launch();
    ~launch();
    void execute(strategy *r, satellite *s);
};
