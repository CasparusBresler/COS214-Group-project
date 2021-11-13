
#include "observer.h"

observer::observer(Mediator *m)
{
    med = m;
}

void observer::update(bool tf)
{
    med->warnOthers(tf);
}
