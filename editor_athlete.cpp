#include "editor_athlete.h"
#include "ui_editor_athlete.h"

editor_athlete::editor_athlete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editor_athlete)
{
    ui->setupUi(this);

}

editor_athlete::~editor_athlete()
{
    delete ui;
}

void editor_athlete::on_BTN_close_clicked()
{
    editor_athlete::close();
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
