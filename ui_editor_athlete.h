/********************************************************************************
** Form generated from reading UI file 'editor_athlete.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOR_ATHLETE_H
#define UI_EDITOR_ATHLETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editor_athlete
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *COMBO_athlete;
    QSpacerItem *verticalSpacer;
    QLabel *LBL_athlPicture;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *LBL_class;
    QCheckBox *BOX_CHECK_isAthlActive;
    QTextEdit *TXT_name;
    QLabel *LBL_surname;
    QLabel *LBL_mail;
    QLabel *LBL_nickname;
    QLabel *LBL_name;
    QLabel *LBL_division;
    QTextEdit *TXT_surname;
    QDateEdit *DATE_birthday;
    QComboBox *COMBO_class;
    QTextEdit *TXT_email;
    QTextEdit *TXT_nick;
    QLabel *LBL_isAthlActive;
    QLabel *LBL_birthday;
    QComboBox *COMBO_division;
    QWidget *gridLayoutWidget_3;
    QGridLayout *LYT_buttons;
    QPushButton *BTN_save;
    QPushButton *BTN_close;
    QPushButton *BTN_loadPicture;

    void setupUi(QDialog *editor_athlete)
    {
        if (editor_athlete->objectName().isEmpty())
            editor_athlete->setObjectName(QString::fromUtf8("editor_athlete"));
        editor_athlete->resize(1280, 800);
        editor_athlete->setMinimumSize(QSize(1280, 800));
        gridLayoutWidget = new QWidget(editor_athlete);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 1261, 781));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        COMBO_athlete = new QComboBox(gridLayoutWidget);
        COMBO_athlete->setObjectName(QString::fromUtf8("COMBO_athlete"));

        gridLayout->addWidget(COMBO_athlete, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 600, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        LBL_athlPicture = new QLabel(gridLayoutWidget);
        LBL_athlPicture->setObjectName(QString::fromUtf8("LBL_athlPicture"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        LBL_athlPicture->setFont(font);
        LBL_athlPicture->setFrameShape(QFrame::Panel);
        LBL_athlPicture->setFrameShadow(QFrame::Raised);
        LBL_athlPicture->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LBL_athlPicture, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(1100, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        groupBox = new QGroupBox(gridLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayoutWidget_2 = new QWidget(groupBox);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 20, 961, 276));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        LBL_class = new QLabel(gridLayoutWidget_2);
        LBL_class->setObjectName(QString::fromUtf8("LBL_class"));
        QFont font1;
        font1.setPointSize(12);
        LBL_class->setFont(font1);
        LBL_class->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(LBL_class, 1, 2, 1, 1);

        BOX_CHECK_isAthlActive = new QCheckBox(gridLayoutWidget_2);
        BOX_CHECK_isAthlActive->setObjectName(QString::fromUtf8("BOX_CHECK_isAthlActive"));

        gridLayout_2->addWidget(BOX_CHECK_isAthlActive, 4, 3, 1, 1, Qt::AlignHCenter);

        TXT_name = new QTextEdit(gridLayoutWidget_2);
        TXT_name->setObjectName(QString::fromUtf8("TXT_name"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TXT_name->sizePolicy().hasHeightForWidth());
        TXT_name->setSizePolicy(sizePolicy);
        TXT_name->setMinimumSize(QSize(0, 0));
        TXT_name->setAcceptRichText(false);

        gridLayout_2->addWidget(TXT_name, 1, 1, 1, 1);

        LBL_surname = new QLabel(gridLayoutWidget_2);
        LBL_surname->setObjectName(QString::fromUtf8("LBL_surname"));
        LBL_surname->setFont(font1);
        LBL_surname->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(LBL_surname, 0, 0, 1, 1);

        LBL_mail = new QLabel(gridLayoutWidget_2);
        LBL_mail->setObjectName(QString::fromUtf8("LBL_mail"));
        LBL_mail->setFont(font1);
        LBL_mail->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(LBL_mail, 4, 0, 1, 1);

        LBL_nickname = new QLabel(gridLayoutWidget_2);
        LBL_nickname->setObjectName(QString::fromUtf8("LBL_nickname"));
        LBL_nickname->setFont(font1);
        LBL_nickname->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(LBL_nickname, 2, 0, 1, 1);

        LBL_name = new QLabel(gridLayoutWidget_2);
        LBL_name->setObjectName(QString::fromUtf8("LBL_name"));
        LBL_name->setFont(font1);
        LBL_name->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(LBL_name, 1, 0, 1, 1);

        LBL_division = new QLabel(gridLayoutWidget_2);
        LBL_division->setObjectName(QString::fromUtf8("LBL_division"));
        LBL_division->setFont(font1);
        LBL_division->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(LBL_division, 2, 2, 1, 1);

        TXT_surname = new QTextEdit(gridLayoutWidget_2);
        TXT_surname->setObjectName(QString::fromUtf8("TXT_surname"));
        sizePolicy.setHeightForWidth(TXT_surname->sizePolicy().hasHeightForWidth());
        TXT_surname->setSizePolicy(sizePolicy);
        TXT_surname->setMinimumSize(QSize(0, 0));
        TXT_surname->setAcceptRichText(false);

        gridLayout_2->addWidget(TXT_surname, 0, 1, 1, 1);

        DATE_birthday = new QDateEdit(gridLayoutWidget_2);
        DATE_birthday->setObjectName(QString::fromUtf8("DATE_birthday"));
        DATE_birthday->setCalendarPopup(true);

        gridLayout_2->addWidget(DATE_birthday, 0, 3, 1, 1);

        COMBO_class = new QComboBox(gridLayoutWidget_2);
        COMBO_class->setObjectName(QString::fromUtf8("COMBO_class"));

        gridLayout_2->addWidget(COMBO_class, 1, 3, 1, 1);

        TXT_email = new QTextEdit(gridLayoutWidget_2);
        TXT_email->setObjectName(QString::fromUtf8("TXT_email"));
        sizePolicy.setHeightForWidth(TXT_email->sizePolicy().hasHeightForWidth());
        TXT_email->setSizePolicy(sizePolicy);
        TXT_email->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(TXT_email, 4, 1, 1, 1);

        TXT_nick = new QTextEdit(gridLayoutWidget_2);
        TXT_nick->setObjectName(QString::fromUtf8("TXT_nick"));
        sizePolicy.setHeightForWidth(TXT_nick->sizePolicy().hasHeightForWidth());
        TXT_nick->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(TXT_nick, 2, 1, 1, 1);

        LBL_isAthlActive = new QLabel(gridLayoutWidget_2);
        LBL_isAthlActive->setObjectName(QString::fromUtf8("LBL_isAthlActive"));
        LBL_isAthlActive->setFont(font1);
        LBL_isAthlActive->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(LBL_isAthlActive, 4, 2, 1, 1);

        LBL_birthday = new QLabel(gridLayoutWidget_2);
        LBL_birthday->setObjectName(QString::fromUtf8("LBL_birthday"));
        LBL_birthday->setFont(font1);
        LBL_birthday->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(LBL_birthday, 0, 2, 1, 1);

        COMBO_division = new QComboBox(gridLayoutWidget_2);
        COMBO_division->setObjectName(QString::fromUtf8("COMBO_division"));

        gridLayout_2->addWidget(COMBO_division, 2, 3, 1, 1);

        gridLayoutWidget_3 = new QWidget(groupBox);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(830, 640, 244, 80));
        LYT_buttons = new QGridLayout(gridLayoutWidget_3);
        LYT_buttons->setObjectName(QString::fromUtf8("LYT_buttons"));
        LYT_buttons->setContentsMargins(0, 0, 0, 0);
        BTN_save = new QPushButton(gridLayoutWidget_3);
        BTN_save->setObjectName(QString::fromUtf8("BTN_save"));
        BTN_save->setFont(font1);

        LYT_buttons->addWidget(BTN_save, 0, 0, 1, 1);

        BTN_close = new QPushButton(gridLayoutWidget_3);
        BTN_close->setObjectName(QString::fromUtf8("BTN_close"));
        BTN_close->setFont(font1);

        LYT_buttons->addWidget(BTN_close, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox, 1, 1, 3, 1);

        BTN_loadPicture = new QPushButton(gridLayoutWidget);
        BTN_loadPicture->setObjectName(QString::fromUtf8("BTN_loadPicture"));

        gridLayout->addWidget(BTN_loadPicture, 2, 0, 1, 1);


        retranslateUi(editor_athlete);

        QMetaObject::connectSlotsByName(editor_athlete);
    } // setupUi

    void retranslateUi(QDialog *editor_athlete)
    {
        editor_athlete->setWindowTitle(QCoreApplication::translate("editor_athlete", "AWM - Edit Athlete", nullptr));
        LBL_athlPicture->setText(QCoreApplication::translate("editor_athlete", "FOTO", nullptr));
        groupBox->setTitle(QCoreApplication::translate("editor_athlete", "NOME ATLETA", nullptr));
        LBL_class->setText(QCoreApplication::translate("editor_athlete", "Classe", nullptr));
        BOX_CHECK_isAthlActive->setText(QCoreApplication::translate("editor_athlete", "Attivo", nullptr));
        LBL_surname->setText(QCoreApplication::translate("editor_athlete", "Cognome", nullptr));
        LBL_mail->setText(QCoreApplication::translate("editor_athlete", "Email", nullptr));
        LBL_nickname->setText(QCoreApplication::translate("editor_athlete", "Nickname", nullptr));
        LBL_name->setText(QCoreApplication::translate("editor_athlete", "Nome", nullptr));
        LBL_division->setText(QCoreApplication::translate("editor_athlete", "Divisione", nullptr));
        LBL_isAthlActive->setText(QCoreApplication::translate("editor_athlete", "Atleta Attivo", nullptr));
        LBL_birthday->setText(QCoreApplication::translate("editor_athlete", "Data Di Nascita", nullptr));
        BTN_save->setText(QCoreApplication::translate("editor_athlete", "Salva Atleta", nullptr));
        BTN_close->setText(QCoreApplication::translate("editor_athlete", "Chiudi Editor", nullptr));
        BTN_loadPicture->setText(QCoreApplication::translate("editor_athlete", "Carica Foto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editor_athlete: public Ui_editor_athlete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOR_ATHLETE_H
