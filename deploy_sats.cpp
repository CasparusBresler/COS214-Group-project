
#include "deploy_sats.h"

deploy_sats::deploy_sats()
{
}

deploy_sats::~deploy_sats()
{
}

void deploy_sats::execute(strategy *r, satellite *s)
{

    r->deploy();
}