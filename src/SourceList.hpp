#pragma once

#include <QListWidget>

class SourceList : public QListWidget
{
  Q_OBJECT

  public:
    SourceList(QWidget* parent = nullptr);

  public slots:
    void onAddSource();
    void onRemoveSource();

  signals:

  protected:

  private:
    

};
