#include "timeline.h"
#include <QVBoxLayout>
Timeline::Timeline(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout;
    setLayout(layout);

    Counter *ctr = new Counter;
    layout->addWidget(ctr);
    layout->addStretch(1);
    mList << ctr;
}
