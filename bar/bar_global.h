#ifndef BAR_GLOBAL_H
#define BAR_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BAR_LIBRARY)
#  define BAR_EXPORT Q_DECL_EXPORT
#else
#  define BAR_EXPORT Q_DECL_IMPORT
#endif

#endif // BAR_GLOBAL_H
