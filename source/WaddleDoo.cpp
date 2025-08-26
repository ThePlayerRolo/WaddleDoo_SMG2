#include "WaddleDoo.h"

WaddleDoo::WaddleDoo(const char *pName) : LiveActor(pName) {

}

void WaddleDoo::init(const JMapInfoIter &rIter) {
    MR::initDefaultPos(this, rIter);
    initModelManagerWithAnm("WaddleDoo", 0, 0, false);
    MR::processInitFunction(this, rIter, false);
    MR::connectToSceneMapObj(this);
    makeActorAppeared();
}

void WaddleDoo::control() {
    LiveActor::control();
}
