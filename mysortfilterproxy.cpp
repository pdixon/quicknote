#include "mysortfilterproxy.h"

MySortFilterProxy::MySortFilterProxy(QObject *parent) :
    QSortFilterProxyModel(parent)
{
}

bool MySortFilterProxy::filterAcceptsRow ( int source_row, const QModelIndex & source_parent ) const
{
    if (qobject_cast<QFileSystemModel *>(sourceModel())->fileInfo(sourceModel()->index(source_row, 0, source_parent)).isDir())
    {
        // always accept children of rootitem, since we want to filter their children
        return true;
    }

    return QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
}
