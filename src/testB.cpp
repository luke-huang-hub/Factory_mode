#include "testB.h"

namespace robosense {
namespace lidar {

TestB::TestB() {}

TestB::~TestB() {}

void TestB::showMessage() {
  qDebug() << "TestB message ##################";
  qDebug() << "TestB test ##################";
}

void TestB::printf() {
  qDebug() << "TestB printf ##################";
  qDebug() << "TestB printf2 ##################";
}
} // namespace lidar
} // namespace robosense
