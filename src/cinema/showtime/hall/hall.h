//
// Created by Ahmed Abdelaziz on 9/6/2024.
//

#ifndef CINEMAAPP_HALL_H
#define CINEMAAPP_HALL_H
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Hall
{
    vector<vector<int>> seats;
public:
    //20 * 20
    Hall();
    void printSeats();
    bool reserveSeat(int row, int column);
    int getSeatPrice(int row, int col);

};

#endif //CINEMAAPP_HALL_H
