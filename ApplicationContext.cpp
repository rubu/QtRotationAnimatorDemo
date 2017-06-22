#include "ApplicationContext.h"

#include <QQmlContext>

QApplicationContext::QApplicationContext()
{
	m_QmlApplicationEngine.rootContext()->setContextProperty("applicationContext", this);
	m_QmlApplicationEngine.load("QtRotationAnimationDemo.qml");
}

void QApplicationContext::SystemTrayMenuActivated(QSystemTrayIcon::ActivationReason eActivationReason)
{
	emit showWindow();
}