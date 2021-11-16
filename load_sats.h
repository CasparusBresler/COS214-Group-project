#include "falcon_command.h"

class load_sats : public falcon_command
{
private:

public:
    load_sats();
    ~load_sats();
    void execute(strategy * r, satellite * s);
};


