#include "falcon_command.h"
class deploy_sats : public falcon_command
{
private:
public:
    deploy_sats();
    ~deploy_sats();
    void execute(strategy *r, satellite *s);
};