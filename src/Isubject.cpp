#include "Iobserve.cpp"
class ISubject
{
    virtual void Attach(Iobserver *observer) = 0;
    virtual void detach(Iobserver *observer) = 0;
    virtual void Notify() = 0;
};