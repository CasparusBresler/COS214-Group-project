//
// Created by micha on 2021/11/16.
//

#include "crew.h"

crew::crew(string s) : storage()
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

crew * crew::clone()
{
    crew* temp = new crew(getName());
    return temp;
}
