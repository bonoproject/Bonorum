// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2020 The BonorumCoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLBONOWIDGET_H
#define COINCONTROLBONOWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlBonoWidget;
}

class CoinControlBonoWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlBonoWidget(QWidget *parent = nullptr);
    ~CoinControlBonoWidget();

private:
    Ui::CoinControlBonoWidget *ui;
};

#endif // COINCONTROLBONOWIDGET_H
