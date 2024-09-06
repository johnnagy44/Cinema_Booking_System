//
// Created by Ahmed Abdelaziz on 9/6/2024.
//

#ifndef CINEMAAPP_CUSTOMER_H
#define CINEMAAPP_CUSTOMER_H
#include "string"
#include "Iobserve.h"
#include "UI/UI.cpp"
using namespace std;
class Customer : public Iobserver{
    string m_name;
    string m_mail;
    string m_phoneNum;
//    Reservation Reservation; // to be edited
    UI ui;

public:
    Customer(string name, string mail, string phone);
    bool makeReservation(int hallID, int movieID, int seat_row, int seat_col, int show_period);
    void printSeats(int hallId, int show_period);
    void Update()override;
};


#endif //CINEMAAPP_CUSTOMER_H
