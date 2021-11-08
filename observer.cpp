//
// Created by micha on 2021/11/08.
//

#include "observer.h"

observer::observer(Mediator *m)
{
    med = m;
}

void observer::update(bool tf)
{
    med->warnOthers(tf);
}
