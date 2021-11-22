#ifndef __TESTBED_H__
#define __TESTBED_H__

#include "falcon9_factory.h"
#include "falconHeavy_factory.h"

using namespace std;

class TestBed
{
private:
public:
    TestBed();
    ~TestBed();
    bool run();
};

#endif // __TESTBED_H__