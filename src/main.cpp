#include "App.h"

#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  App w;
  w.showMaximized();
  return a.exec();
}
