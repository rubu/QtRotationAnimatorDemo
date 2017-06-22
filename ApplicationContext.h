#pragma once

#include <QQmlApplicationEngine>
#include <QSystemTrayIcon>

class QApplicationContext : public QObject
{
	Q_OBJECT

public:
	QApplicationContext();

signals:
	void showWindow();

public slots:
	void SystemTrayMenuActivated(QSystemTrayIcon::ActivationReason eActivationReason);

private:
	QQmlApplicationEngine m_QmlApplicationEngine;
};