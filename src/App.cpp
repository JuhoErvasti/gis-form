#include "App.h"
#include "./ui_App.h"

App::App(QWidget* parent)
  : QMainWindow(parent)
  , ui(new Ui::App)
{
  ui->setupUi(this);
  setWindowModified("gis-form");
}

App::~App()
{
  delete ui;
}

