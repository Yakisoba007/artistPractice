#ifndef TIMELINE_H
#define TIMELINE_H

#include <QWidget>
#include "counter.h"

class Timeline : public QWidget
{
    Q_OBJECT
public:
    explicit Timeline(QWidget *parent = 0);
private:
    QList<Counter*> mList;
};

#endif // TIMELINE_H
