#ifndef FACTORY_H
#define FACTORY_H

#include "testA.h"
#include "testB.h"
#include "testC.h"
#include <QtCore/QObject>
#include <QtCore/QtDebug>

namespace robosense {
namespace lidar {
enum ClassType { TESTA, TESTB, TESTC };
class Factory : public Base {
public:
  Factory();
  ~Factory();

  static Base *getFactoryTypety(ClassType kind);
};

} // namespace lidar
} // namespace robosense

#endif // FACTORY_H