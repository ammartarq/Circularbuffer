#ifndef CIRCULARBUFFER_H
#define CIRCULARBUFFER_H
#include<QMutexLocker>
#include<QSemaphore>
#include<QVector>
#include<QVectorIterator>





template <class T> class CircularBuffer
{
public:

    explicit CircularBuffer(const int size);
    void addFrame(T &item);
    T getFrame();
    void reset();
    bool isEmpty() const;
    bool isFull() const;
    int  getFreeCapacity() const;
    int  getSize() const;
    void getContent() const;
private:


    QVector<T> buffer_;
    int  max_size_;
    QMutex buffer_mutex_;
    int pos_;

};

#endif // CIRCULARBUFFER_H
