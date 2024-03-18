#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class App; }
QT_END_NAMESPACE

class App : public QMainWindow
{
  Q_OBJECT

public:
  App(QWidget *parent = nullptr);
  ~App();

private:
  Ui::App *ui;
};

