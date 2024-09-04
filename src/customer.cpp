#include <string>
#include "reservation.cpp"
#include "Iobserve.cpp"
#include "UI.cpp"
using namespace std;
class CustomerC : Iobserve
{
    string m_mail;
    string m_phoneNum;
    Reservation Reservation; // to be edited
    UI ui;

public:
    CustomerC(string mail, string phone, UI ui)
    {
        m_mail = mail;
        m_phoneNum = phone;
        // this->ui = ui;
    }
    bool makeReservation(int hallID, int movieID, int seat_row, int seat_col, int show_period)
    {
        ui.reserveSeat(hallID, movieID, show_period, seat_row, seat_col);
    }
};
