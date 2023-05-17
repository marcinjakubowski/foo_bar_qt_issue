#ifndef FOOPROPERTY_H
#define FOOPROPERTY_H


#include "../bar/bar.h"
#include <QObject>

struct Foo
{
    Q_GADGET
    Q_PROPERTY(double x MEMBER x)
    Q_PROPERTY(double y MEMBER y)

public:
    double x, y;
};

#endif // FOOPROPERTY_H
