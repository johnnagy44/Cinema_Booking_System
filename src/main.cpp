#include <iostream>
#include <string>
#include <vector>
#include "customer/customer.h"
using namespace std;

int main()
{
    Cinema *cinema;
    Customer hamada("ahmed", "klbz@gmail.com", "Ahmed");
    cinema->getInstance().Attach(&hamada);
    cinema->getInstance().addMovie(Movie());
    hamada.makeReservation(1, 2, 3, 6, 2);
    hamada.printSeats(1, 2);
    hamada.makeReservation(1, 2, 3, 6, 2);
    hamada.printSeats(1, 2);
    hamada.makeReservation(1, 2, 1, 1, 3);
    hamada.printSeats(1, 3);


    return 0;
}