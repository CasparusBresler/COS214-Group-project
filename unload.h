//
// Created by micha on 2021/11/16.
//

#ifndef UNLOAD_H
#define UNLOAD_H

#include "DragonCommand.h"

using namespace std;
//This is the unload class
///
class unload : public DragonCommand
{
private:
public:
    /// This is the unload Constructor.
    ///
    /// 
    unload();

    /// This is the unload deconstructor.
    ///
    /// 
    ~unload();

    /// This is the execute function.
    ///
    ///This responsible for unloading the dragon rocket
    void execute(dragon_template* , storage*) override;

};

#endif // LOAD_H
