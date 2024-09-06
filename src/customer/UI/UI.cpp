//
// Created by Ahmed Abdelaziz on 9/6/2024.
//
#include "../../cinema/cinema.h"
class UI
{
    Cinema *cinema;

public:
    UI()
    {
        cinema = &cinema->getInstance();
    }
    bool reserveSeat(int hallid, int movieid, int showperiod, int row, int col)
    {
        return cinema->getInstance().getShowTimeById(showperiod).getHallById(hallid)->reserveSeat(row, col);
    }
    void showMovies()
    {
        cinema->getInstance().showMovies();
    }
    void showSeats(int hallid, int showTimeID){
        cinema->getInstance().getShowTimeById(showTimeID).getHallById(hallid)->printSeats();
    }
};