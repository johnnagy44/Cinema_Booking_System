#include "cinema.cpp"
class UI
{
    CinemaC *CinemaC;

public:
    UI()
    {
        CinemaC = &CinemaC->getInstance();
    }
    bool reserveSeat(int hallid, int movieid, int showperiod, int row, int col)
    {
        return CinemaC->getInstance().getHallId(showperiod, hallid).reserveSeat(row, col);
    }
    void showMovies()
    {
        CinemaC->
    }
};