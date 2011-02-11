#include <QtGui/QApplication>
#include "noteswindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NotesWindow w;
    w.show();

    return a.exec();
}
