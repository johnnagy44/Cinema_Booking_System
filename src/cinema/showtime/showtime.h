//
// Created by Ahmed Abdelaziz on 9/6/2024.
//

#ifndef CINEMAAPP_SHOWTIME_H
#define CINEMAAPP_SHOWTIME_H

#include <memory>
#include "hall/hall.h"

class ShowTime {
    int date;
    int time;
    int screen_num;
    std::vector<std::shared_ptr<Hall>> halls;
public:
    ShowTime();
    shared_ptr<Hall> getHallById(int id);
};


#endif //CINEMAAPP_SHOWTIME_H
