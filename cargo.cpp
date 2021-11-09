#include "cargo.h"

cargo::cargo(string s)
{
    this->name = s;
}

cargo::~cargo()
{
}

string cargo::getName()
{
    return this->name;
}

void cargo::setName(string inS)
{
    this->name = inS;
}
