#include "ToolInfo.hpp"
#include <QProcess>
#include <QTextStream>

ToolInfo::ToolInfo(QWidget* parent)
  : QPushButton(parent)
{

}

void ToolInfo::runProcess(const QString& path)
{
  QProcess process;
  QStringList arguments = QStringList() << path;
  process.start("ogrinfo", arguments);

  if (!process.waitForStarted())
  {
    qDebug() << "Couldn't start process";
    return;
  }

  if (!process.waitForFinished()) 
  {
    qDebug() << "Couldn't finish process";
    return;
  }

  QString output = process.readAllStandardOutput();

  info_browser->setText(output);
}

void ToolInfo::mousePressEvent(QMouseEvent* event)
{
  QPushButton::mousePressEvent(event);

  for (auto item : source_list->selectedItems()) {
    runProcess(item->text());
    break;
  }
}
