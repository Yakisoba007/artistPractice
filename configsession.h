#ifndef CONFIGSESSION_H
#define CONFIGSESSION_H

#include <QWidget>
#include <ui_configsession.h>

class ConfigSession : public QWidget
{
    Q_OBJECT
public:
    explicit ConfigSession(QWidget *parent = 0);
private:
    Ui_ConfigSession mUi;
signals:

public slots:
};

#endif // CONFIGSESSION_H
