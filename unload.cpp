#include "unload.h"

using namespace std;

unload::load()
{

}

unload::~load()
{

}

void load::execute(template* r , storage* s)
{
    r->unload(s);
}
