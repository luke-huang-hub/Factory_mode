#ifndef BASE_H
#define BASE_H

#include <QtCore/QObject>
#include <QtCore/QtDebug>

namespace robosense {
namespace lidar {

class Base : public QObject {

public:
  Base();
  ~Base();

  virtual void showMessage();
  virtual void printf();
};

} // namespace lidar
} // namespace robosense

#endif // BASE_H