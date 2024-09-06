//
// Created by Ahmed Abdelaziz on 9/6/2024.
//

#include "showtime.h"
ShowTime::ShowTime() {
    for (int i = 0; i < 5; ++i) {
        halls.push_back(std::make_shared<Hall>());
    }

}

shared_ptr<Hall> ShowTime::getHallById(int id) {
    return halls[id];
}