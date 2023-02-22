#include "pin.h"
#include "QPainter"
pin::pin()
{

}
void pin::paintEvent(QPaintEvent *e){
    this->setFixedSize(15,15);
    QPainter p(this);
    p.setPen(Qt::SolidLine);
    p.drawRect(0,0,5,5);
<<<<<<< Updated upstream
    p.drawText(0,20,"this is a test");
=======
    p.drawText(0,222,"this is test two");
>>>>>>> Stashed changes
}
