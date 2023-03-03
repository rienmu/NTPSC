#include "subwindow.h"
#include "controls/userdef.h"
#include "QPixmap"
SubWindow::SubWindow()
{
    guiback = new GUIBackGround();
    guiback->resize(this->size());
    guiback->setParent(this);
    guiback->move(0,0);
    guiback->installEventFilter(this);
   // UserDef *res = new UserDef("../NTPSC//lib//res.ntp");
    //res->setParent(guiback);
   // res->move(100,300);
}
void SubWindow::AddDevice(QImage image){
   // UserDef *res1 = new UserDef("../NTPSC//lib//res.ntp");
   // res1->setParent(guiback);
   // res1->move(200,300);
    PerElment pe;
    pe.image=image;
    pe.x = 500;
    pe.y = 20;
    ElementList.append(pe);
    update();

}

bool SubWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == guiback)
    {
        if(event->type() == QEvent::Paint)
        {
            qDebug()<<"i am drawing";
            QPainter p(guiback);
           // QImage *i =  guiback->getImage();
           // p.drawEllipse(100,200,30,30);
            if(!ElementList.isEmpty())
            {
                for(auto pe:ElementList)
                {
                     p.drawImage(pe.x,pe.y,pe.image);
                 }

            }


        }
    }
}

