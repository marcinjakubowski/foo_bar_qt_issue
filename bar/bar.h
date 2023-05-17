#ifndef BAR_H
#define BAR_H

#include "bar_global.h"
#include <QObject>

struct BAR_EXPORT Bar
{
    Q_GADGET
    Q_PROPERTY(double x MEMBER x)
    Q_PROPERTY(double y MEMBER y)
public:
    double x, y;
};
Q_DECLARE_METATYPE(Bar)

#endif // BAR_H
