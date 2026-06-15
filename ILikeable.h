#ifndef ILIKEABLE_H
#define ILIKEABLE_H
#include <iostream>
using namespace std;
class ILikeable{
public:
    virtual void darLike() = 0;
    virtual void quitarLike() = 0;
};
#endif