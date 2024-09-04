#include "cinema.cpp"
#include "movie.cpp"
class Admin
{
    CinemaC cinema;

public:
    void addMovie(string name, string genre)
    {
        cinema.addMovie(MovieC(name, genre));
    }
};