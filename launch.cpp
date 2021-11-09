#include "launch.h"

launch::launch()
{
}

launch::~launch()
{
}

void launch::execute(strategy *r, satellite *s)
{
    r->launch_sequence();
}