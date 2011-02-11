#ifndef MYSORTFILTERPROXY_H
#define MYSORTFILTERPROXY_H

#include <QtGui>

class MySortFilterProxy : public QSortFilterProxyModel
{
    Q_OBJECT
public:
    explicit MySortFilterProxy(QObject *parent = 0);

protected:
    bool filterAcceptsRow ( int source_row, const QModelIndex & source_parent ) const;

};

#endif // MYSORTFILTERPROXY_H
