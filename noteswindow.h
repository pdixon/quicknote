#ifndef NOTESWINDOW_H
#define NOTESWINDOW_H

#include <QtGui>

namespace Ui {
    class NotesWindow;
}

class MySortFilterProxy;

class NotesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NotesWindow(QWidget *parent = 0);
    ~NotesWindow();

private:
    Ui::NotesWindow *ui;
    QFileSystemModel *files;
    MySortFilterProxy *filesFilter;
};

#endif // NOTESWINDOW_H
