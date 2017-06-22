#include "ApplicationContext.h"

#include <QApplication>
#include <QSystemTrayIcon>

int main(int argc, char *argv[])
{
	QApplication Application(argc, argv);
	QApplicationContext ApplicationContext;
	Application.setQuitOnLastWindowClosed(false);
	QSystemTrayIcon SystemTrayIcon;
	ApplicationContext.connect(&SystemTrayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), SLOT(SystemTrayMenuActivated(QSystemTrayIcon::ActivationReason)));
	SystemTrayIcon.setIcon(QIcon("icon.png"));
	SystemTrayIcon.show();
	return Application.exec();
}
