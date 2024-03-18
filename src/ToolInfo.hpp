#pragma once

#include <QPushButton>
#include <QMouseEvent>
#include <QTextBrowser>

#include "SourceList.hpp"

class ToolInfo : public QPushButton
{
  Q_OBJECT

  public:
    ToolInfo(QWidget* parent = nullptr);

    QTextBrowser* info_browser;
    SourceList* source_list;
  protected:
    void mousePressEvent(QMouseEvent* event) override;

  private:
    void runProcess(const QString& path);
};
