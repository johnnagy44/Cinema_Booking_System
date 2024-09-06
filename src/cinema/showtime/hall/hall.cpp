//
// Created by Ahmed Abdelaziz on 9/6/2024.
//
#include "hall.h"
//Cinema* Cinema::cinema = nullptr;
Hall::Hall() : seats(10, vector<int>(10, 0)) {
    // Initial setup of a 20x20 seating arrangement, with all seats unreserved.
    // 0 means unreserved, 1 means reserved (or any other convention you want to follow)
}
void Hall::printSeats()
{
    for (auto row : seats)
    {
        for (auto seat : row)
        {
            cout << seat << " ";
        }
        cout << endl;
    }
}
bool Hall::reserveSeat(int row, int column)
{
    row--, column--;
    if (row >= 20 || row < 0 || column >= 20 || column < 0 || seats[row][column] == 1)
    {
        cout<<"Seat is already reserved :("<<endl;
        return false;
    }
    seats[row][column] = 1;
    cout<<"Seat reserved :)"<<endl;
    return true;
}
int Hall::getSeatPrice(int row, int col){
    return 0;
}