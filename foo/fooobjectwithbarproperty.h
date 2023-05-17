#ifndef FOOOBJECTWITHBARPROPERTY_H
#define FOOOBJECTWITHBARPROPERTY_H

#include <QObject>
#include "../bar/bar.h"
#include "foo.h"

class FooObjectWithBarProperty : public QObject
{
    Q_OBJECT
    Q_PROPERTY(Bar bar READ getBar WRITE setBar NOTIFY barChanged)
    Q_PROPERTY(Foo foo READ getFoo WRITE setFoo NOTIFY fooChanged)

public:
    const Bar getBar() const {
        return _bar;
    }

    void setBar(const Bar& bar) {
        _bar = bar;
        emit barChanged(_bar);
    }

    const Foo getFoo() const {
        return _foo;
    }

    void setFoo(const Foo& foo) {
        _foo = foo;
        emit fooChanged(_foo);
    }

private:
    Bar _bar;
    Foo _foo;

signals:
    void barChanged(const Bar&);
    void fooChanged(const Foo&);
};

#endif // FOOOBJECTWITHBARPROPERTY_H
