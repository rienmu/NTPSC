#include "guibase.h"

GuiBase::GuiBase(){


}

void GuiBase::setnType(int nType){
    this->nType = nType;
}

void GuiBase::setValue(double value){
    this->value=value;
}
double GuiBase::getValue(){
    return this->value;
}
int GuiBase::getnType(){
    return this->nType;
}
bool GuiBase::IsSelected(){
    return n_isSelected;
}

/*读取文件数据*/
void GuiBase::ReadAndWriteFile(QString path){


    file.setFileName(path);
    QString st="";
    //QRegExp REGLINE("(.*\\n)");


    bool isopened= file.open(QIODevice::ReadWrite | QIODevice::Text);
    if(!isopened)  {
        qDebug()<<file.exists();
        megToclient.setWindowTitle("警告");
        megToclient.setText("器件文件打开失败，请确认器件文件是否存在");
        megToclient.exec();
    }else{

        while(!file.atEnd()){
            QByteArray qb = file.readLine();
            CellList.append(qb);
        }

        AnalysisText(CellList);
//        megToclient.setText(CellList.at(1));
//        megToclient.exec();
    }
}
void GuiBase::AnalysisText(QStringList CellList){
    while(!CellList.isEmpty()){
         QString temp = CellList.front();
         QTextStream qts(&temp);
         while (!qts.atEnd()) {
             QString str;
             qts>>str;
             if(str.contains("ELEMENTTYPE")){
                   qts>>ElementType;
             }
             qDebug()<<ElementType;
         }
         CellList.pop_front();
    }

}













