#include "crew.h"

crew::crew(string s)
{
    this->name = s;
}

crew::~crew()
{
}

string crew::getName()
{
    return this->name;
}

void crew::setName(string word)
{
    this->name = word;
}
