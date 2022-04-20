#include "factory.h"

namespace robosense {
namespace lidar {
Factory::Factory() {}

Factory::~Factory() {}

Base *Factory::getFactoryTypety(ClassType kind) {

  Base *select = nullptr;
  switch (kind) {
  case TESTA:
    select = new TestA();
    break;
  case TESTB:
    select = new TestB();
    break;
  case TESTC:
    select = new TestC();
    break;
  default:
    break;
  }
  return select;
}

} // namespace lidar
} // namespace robosense
