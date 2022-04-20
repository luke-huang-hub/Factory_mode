#ifndef TESTB_H
#define TESTB_H

#include "base.h"
#include <QtCore/QObject>
#include <QtCore/QtDebug>

namespace robosense {
namespace lidar {

class TestB : public Base {
public:
  TestB();
  ~TestB();

  void showMessage();
  void printf();
};
} // namespace lidar
} // namespace robosense

#endif // TESTB_H
