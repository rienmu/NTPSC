#include "subwindow.h"
#include "controls/userdef.h"
#include "QPixmap"
SubWindow::SubWindow()
{
    backView.setParent(this);
    int w = this->size().width();
    int h = this->size().height();
    backView.move(6,30);
    backView.resize(w-12,h-36);
    backView.setCacheMode(QGraphicsView::CacheBackground);
    backView.setSceneRect(0,0,w-12,h-36);
    backScene.setSceneRect(0, 0, w-12,h-36);
    backView.setScene(&backScene);
    backScene.setParent(&backView);
    backView.show();





    //    guiback = new GUIBackGround();
    //    guiback->resize(this->size());
    //    guiback->setParent(this);
    //    guiback->move(0,0);
    //    guiback->installEventFilter(this);
    // UserDef *res = new UserDef("../NTPSC//lib//res.ntp");
    // res->setParent(guiback);
    //  res->move(100,300);
}

void SubWindow::AddDevice(GuiItem *item)
{
    backScene.addItem(item);
}
//void SubWindow::AddDevice(UserDef* image){
//    // UserDef *res1 = new UserDef("../NTPSC//lib//res.ntp");
//    // res1->setParent(guiback);
//    // res1->move(200,300);

//    PerElement pe(20,20,image);
//    ElementList.append(pe);
//    update();

//}

bool SubWindow::eventFilter(QObject *watched, QEvent *event)
{

    //    if(watched == guiback)
    //    {
    //        if(event->type() == QEvent::Paint)
    //        {
    //            qDebug()<<"i am drawing";
    //            QPainter p(guiback);
    //            if(!ElementList.isEmpty())
    //            {
    //                while(!ElementList.isEmpty())
    //                {
    //                       PerElement pe = ElementList.at(0);
    //                    QImage img =  pe.image->mirrored();
    //                    // img->mirrored();
    //                    //img->copy(pe.image);
    //                    //qDebug()<<img.save("d:/res1.png");
    //                    p.drawImage( pe.x, pe.y,img);
    //                    ElementList.pop_front();
    //                }
    //            }
    //        }
    //        if(event->type() == QEvent::MouseButtonPress)
    //        {
    //            qDebug()<<"clicked on bg";
    //            //            for(auto pe:ElementList)
    //            //            {

    //            //            }
    //        }
    //    }

    //    return false;
}

void SubWindow::resizeEvent(QResizeEvent *event)
{
    backView.move(6,30);
    int w = this->size().width();
    int h = this->size().height();
    backView.resize(w-12,h-46);
}

