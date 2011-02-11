#include "noteswindow.h"
#include "ui_noteswindow.h"
#include "mysortfilterproxy.h"

NotesWindow::NotesWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NotesWindow),
    files(new QFileSystemModel),
    filesFilter(new MySortFilterProxy)
{
    ui->setupUi(this);

    files->setFilter(QDir::Files);

    QModelIndex index(files->setRootPath("/home/pdixon/Dropbox/Elements"));

    filesFilter->setSourceModel(files);
    filesFilter->setDynamicSortFilter(true);
    ui->treeView->setSortingEnabled(true);
    ui->treeView->setModel(filesFilter);
    ui->treeView->setRootIndex(filesFilter->mapFromSource(index));
    ui->treeView->hideColumn(1);
    ui->treeView->hideColumn(2);

    connect(ui->lineEdit, SIGNAL(textChanged(QString)), filesFilter, SLOT(setFilterFixedString(QString)));
}

NotesWindow::~NotesWindow()
{
    delete ui;
}

