//Rachel Hamilton and Regan Shen
#include "load.h"

using namespace std;

load::load()
{

}

load::~load()
{

}

void load::execute(template* r , storage* s)
{
    r->loadIn(s);
}