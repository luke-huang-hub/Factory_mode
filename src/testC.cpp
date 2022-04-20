#include "testC.h"

namespace robosense {
namespace lidar {
TestC::TestC() {}

TestC::~TestC() {}

void TestC::showMessage() {
  qDebug() << "TestC message ##################";
  qDebug() << "TestC test ##################";
}

void TestC::printf() {
  qDebug() << "TestC printf ##################";
  qDebug() << "TestC printf2 ##################";
}
} // namespace lidar
} // namespace robosense
