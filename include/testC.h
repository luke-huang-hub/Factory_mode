#ifndef TESTC_H
#define TESTC_H

#include "base.h"
#include <QtCore/QObject>
#include <QtCore/QtDebug>

namespace robosense {
namespace lidar {

class TestC : public Base {
public:
  TestC();
  ~TestC();

  void showMessage();
  void printf();
};
} // namespace lidar
} // namespace robosense

#endif // TESTC_H
