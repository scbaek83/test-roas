#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setApplicationVersion(APP_VERSION);
    a.setOrganizationName("PPI");
    a.setOrganizationDomain("ppitek.com");
    a.setApplicationName("ROAS_Monitor");

    MainWindow w;
    w.show();

    return a.exec();
}
