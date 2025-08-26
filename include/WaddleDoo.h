#pragma once
#include "syati.h"

class WaddleDoo : public LiveActor {
public:
    WaddleDoo(const char *pName);

    virtual void init(const JMapInfoIter &rIter);
    virtual void control();
    
    s32 mDeathCollectable;
};