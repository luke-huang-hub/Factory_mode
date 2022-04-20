
#include "factory.h"

#include <QtCore/QVariant>
#include <QtCore/QtDebug>
#include <QtWidgets/QApplication>
#include <iostream>
#include <stdio.h>
using namespace robosense::lidar;
int main(int argc, char *argv[]) {

  Base *testa = Factory::getFactoryTypety(TESTA);
  Base *testb = Factory::getFactoryTypety(TESTB);
  Base *testc = Factory::getFactoryTypety(TESTC);

  testa->showMessage();
  testb->showMessage();
  testc->showMessage();

  return 0;
}
