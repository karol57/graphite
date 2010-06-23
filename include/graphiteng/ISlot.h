#ifndef ISLOT_INCLUDE
#define ISLOT_INCLUDE

#include "graphiteng/Types.h"

class ISegment;

class ISlot
{
public:
    virtual unsigned short gid() const = 0;
    virtual Position origin() const = 0;
    virtual float advance(FontImpl *font) = 0;
    virtual int before() const = 0;
    virtual int after() const = 0;
};

#endif // SLOT_INCLUDE

