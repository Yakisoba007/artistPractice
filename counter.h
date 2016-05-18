#ifndef COUNTER_H
#define COUNTER_H

#include <QWidget>
#include <ui_counter.h>

class Counter : public QWidget
{
    Q_OBJECT
public:
    explicit Counter(QWidget *parent = 0);

signals:

private:
    Ui_CounterWidget mUi;
public slots:
};

#endif // COUNTER_H
