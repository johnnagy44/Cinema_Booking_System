//
// Created by Ahmed Abdelaziz on 9/6/2024.
//

#ifndef CINEMAAPP_ISUBJECT_H
#define CINEMAAPP_ISUBJECT_H
#include "../customer/Iobserve.h"
class ISubject
{
    virtual void Attach(Iobserver *observer) = 0;
//    virtual void detach(Iobserver *observer) = 0;
    virtual void Notify() = 0;
};
#endif //CINEMAAPP_ISUBJECT_H
