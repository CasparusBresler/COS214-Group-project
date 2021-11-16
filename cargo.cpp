#include "cargo.h"

cargo::cargo(string s) : storage()
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

void cargo::setName(string word)
{
    this->name = word;
}

cargo * cargo::clone()
{
    cargo* temp = new cargo(this->getName());
    return temp;

}