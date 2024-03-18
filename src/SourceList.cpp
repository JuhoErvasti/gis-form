#include "SourceList.hpp"
#include <QFileDialog>
#include <QStandardPaths>

SourceList::SourceList(QWidget* parent)
  : QListWidget(parent)
{

}

void SourceList::onAddSource()
{
  const QStringList paths = QFileDialog::getOpenFileNames(this,
                                                            "Add Data Sources",
                                                            QStandardPaths::writableLocation(QStandardPaths::DesktopLocation),
                                                            "Geopackage (*.gpkg)");
  addItems(paths);
}

void SourceList::onRemoveSource()
{
  for (QListWidgetItem* item : selectedItems()) {
    delete item;
  }
}
