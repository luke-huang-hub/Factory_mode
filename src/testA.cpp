#include "testA.h"

namespace robosense {
namespace lidar {

TestA::TestA() {}

TestA::~TestA() {}

void TestA::showMessage() {
  qDebug() << "TestA message ##################";
  qDebug() << "TestA test ##################";
}

void TestA::printf() {
  qDebug() << "TestA printf ##################";
  qDebug() << "TestA printf2 ##################";
}

} // namespace lidar
} // namespace robosense
