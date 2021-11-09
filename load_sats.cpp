include "load_sats.h"

load_sats::load_sats()
{
}

load_sats::~load_sats()
{
}

void load_sats::execute(strategy * r, satellite * s){

    r->load_sat(s);
}