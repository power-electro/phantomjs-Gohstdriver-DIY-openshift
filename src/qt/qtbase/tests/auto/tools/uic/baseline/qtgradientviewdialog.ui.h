/*
*********************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the autotests of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL21$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** As a special exception, The Qt Company gives you certain additional
** rights. These rights are described in The Qt Company LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** $QT_END_LICENSE$
**
*********************************************************************
*/

/********************************************************************************
** Form generated from reading UI file 'qtgradientviewdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef QTGRADIENTVIEWDIALOG_H
#define QTGRADIENTVIEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include "qtgradientview.h"

QT_BEGIN_NAMESPACE

class Ui_QtGradientViewDialog
{
public:
    QVBoxLayout *vboxLayout;
    QtGradientView *gradientView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QtGradientViewDialog)
    {
        if (QtGradientViewDialog->objectName().isEmpty())
            QtGradientViewDialog->setObjectName(QStringLiteral("QtGradientViewDialog"));
        QtGradientViewDialog->resize(178, 72);
        vboxLayout = new QVBoxLayout(QtGradientViewDialog);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        gradientView = new QtGradientView(QtGradientViewDialog);
        gradientView->setObjectName(QStringLiteral("gradientView"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gradientView->sizePolicy().hasHeightForWidth());
        gradientView->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(gradientView);

        buttonBox = new QDialogButtonBox(QtGradientViewDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(QtGradientViewDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QtGradientViewDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QtGradientViewDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QtGradientViewDialog);
    } // setupUi

    void retranslateUi(QDialog *QtGradientViewDialog)
    {
        QtGradientViewDialog->setWindowTitle(QApplication::translate("QtGradientViewDialog", "Select Gradient", 0));
    } // retranslateUi

};

namespace Ui {
    class QtGradientViewDialog: public Ui_QtGradientViewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // QTGRADIENTVIEWDIALOG_H
