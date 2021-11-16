#define TESTING

#include <iostream>
#include "TestBed.h"

using namespace std;

int main()
{
#ifdef TESTING
    TestBed *t = new TestBed();
    t->run();
#endif
    return 0;
}
