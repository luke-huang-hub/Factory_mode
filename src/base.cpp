#include "base.h"

namespace robosense {
namespace lidar {
Base::Base() {}

Base::~Base() {}

void Base::showMessage() {
  qDebug() << "base message ##################";
  qDebug() << "base test ##################";
}

void Base::printf() {
  qDebug() << "base printf ##################";
  qDebug() << "base printf2 ##################";
}

} // namespace lidar
} // namespace robosense