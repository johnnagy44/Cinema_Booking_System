//
// Created by Ahmed Abdelaziz on 9/6/2024.
//

#include "customer.h"

Customer::Customer(string name, string mail, string phone) {
    m_name = name;
    m_mail = mail;
    m_phoneNum = phone;
}
bool Customer::makeReservation(int hallID, int movieID, int seat_row, int seat_col, int show_period) {
    return ui.reserveSeat(hallID, movieID, show_period, seat_row, seat_col);
}

void Customer::printSeats(int hallId, int show_period){
    ui.showSeats(hallId, show_period);
};

void Customer::Update() {
    cout<< this->m_name<< " has been notified about the new movie!!" << endl;
}