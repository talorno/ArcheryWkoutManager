#include "editor_athlete.h"
#include "ui_editor_athlete.h"
#include "athlete.h"
#include <QSqlQuery>
#include <QDebug>




editor_athlete::editor_athlete(QWidget *parent) :
    QDialog(parent),
    athleteEditorUi(new Ui::editor_athlete)
{
    athleteEditorUi->setupUi(this);
    populateDivisionComboBox();

}

editor_athlete::editor_athlete(QString nickname, QWidget *parent) :
    QDialog(parent),
    athleteEditorUi(new Ui::editor_athlete)
{
    athleteEditorUi->setupUi(this);

    populateDivisionComboBox();

    QSqlQuery athlToEditQRY;

    athlToEditQRY.exec("SELECT athleteNickName, athleteName, athleteSurName, division, bornDate, mailAddress, isActive FROM T_cfg_Athletes WHERE athleteNickName='"+nickname+"';");

    athlToEditQRY.first();


    athleteEditorUi->TXT_nick->setText(athlToEditQRY.value(0).toString());
    athleteEditorUi->TXT_name->setText(athlToEditQRY.value(1).toString());
    athleteEditorUi->TXT_surname->setText(athlToEditQRY.value(2).toString());
    athleteEditorUi->TXT_email->setText(athlToEditQRY.value(5).toString());
    athleteEditorUi->DATE_birthday->setDate(athlToEditQRY.value(4).toDate());
    athleteEditorUi->BOX_CHECK_isAthlActive->setChecked(athlToEditQRY.value(6).toBool());

}


editor_athlete::~editor_athlete()
{
    delete athleteEditorUi;
}

void editor_athlete::on_BTN_close_clicked()
{
    editor_athlete::close();
}

void editor_athlete::populateClassComboBox(){
//DA RIEMPIRE

}
void editor_athlete::populateDivisionComboBox(){
    QSqlQueryModel *DivBoxModel = new QSqlQueryModel;

    DivBoxModel->setQuery("SELECT divisionDescr FROM T_sys_Divisions;");
    athleteEditorUi->COMBO_division->setModel(DivBoxModel);

}

/*
 *
 * // Generate an image (in this case a screenshot) and store it in a QByteArray
    QScreen *screen = app.primaryScreen();
    QPixmap inPixmap = screen->grabWindow( 0 );
    QByteArray inByteArray;
    QBuffer inBuffer( &inByteArray );
    inBuffer.open( QIODevice::WriteOnly );
    inPixmap.save( &inBuffer, "PNG" ); // write inPixmap into inByteArray in PNG format

    // Alternatively, load an image file directly into a QByteArray
    // QFile file("screenshot.png");
    // if (!file.open(QIODevice::ReadOnly)) return;
    // QByteArray inByteArray = file.readAll();

    // Insert image bytes into the database
    // Note: make sure to wrap the :placeholder in parenthesis
    query.prepare( "INSERT INTO imgTable (filename, imagedata) VALUES ('screenshot.png', :imageData)" );
    query.bindValue( ":imageData", inByteArray );
    if( !query.exec() )
        qDebug() << "Error inserting image into table:\n" << query.lastError();

    // Get image data back from database
    if( !query.exec( "SELECT imagedata from imgTable" ))
        qDebug() << "Error getting image from table:\n" << query.lastError();
    query.first();
    QByteArray outByteArray = query.value( 0 ).toByteArray();
    QPixmap outPixmap = QPixmap();
    outPixmap.loadFromData( outByteArray );
    db.close();

    // Display image
    QLabel myLabel;
    myLabel.setPixmap( outPixmap );
    myLabel.show();

    return app.exec();
    */
