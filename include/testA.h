#ifndef TESTA_H
#define TESTA_H

#include "base.h"

#include <QtCore/QObject>
#include <QtCore/QtDebug>

namespace robosense {
namespace lidar {

class TestA : public Base {
public:
  TestA();
  ~TestA();

  void showMessage();
  void printf();
};

} // namespace lidar
} // namespace robosense

#endif // TESTA_H