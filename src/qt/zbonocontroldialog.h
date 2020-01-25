// Copyright (c) 2017-2019 The PIVX developers
// Copyright (c) 2020 The BonorumCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZBONOCONTROLDIALOG_H
#define ZBONOCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zbono/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZBonoControlDialog;
}

class CZBonoControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZBonoControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZBonoControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZBonoControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZBonoControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZBonoControlDialog(QWidget *parent);
    ~ZBonoControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZBonoControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZBonoControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZBONOCONTROLDIALOG_H
