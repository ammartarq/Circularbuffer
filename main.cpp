#include <QCoreApplication>
#include <iostream>
#include "circularbuffer.h"
int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

    CircularBuffer<int>buffer(10);

    for (int i =1 ;i<25; ++i) {
        //std::cout<<i<<std::endl;
        buffer.addFrame(i);
        std::cout<<"old frame: "<<buffer.getFrame()<<std::endl;
    }






    return a.exec();
}
