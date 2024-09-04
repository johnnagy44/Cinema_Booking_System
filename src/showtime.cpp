#include "hall.cpp"
class Showtime
{
public:
    int date;
    int time;
    int screen_num;
    vector<Hall> halls;
    vector<Hall> gethall()
    {
        return halls;
    }
};