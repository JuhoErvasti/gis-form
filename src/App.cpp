#include "App.hpp"
#include "./ui_App.h"

App::App(QWidget* parent)
  : QMainWindow(parent)
  , ui(new Ui::App)
{
  ui->setupUi(this);
  setWindowTitle("gis-form");

  ui->tool_info->source_list = ui->list_source;
  ui->tool_info->info_browser = ui->brws_info;
}

App::~App()
{
  delete ui;
}

