#include <string>
#include <vector>
#include <map>
#include "Iobserve.cpp"
#include "Isubject.cpp"
#include "customer.cpp"
#include "movie.cpp"
#include "hall.cpp"
#include "showtime.cpp"
using namespace std;
class CinemaC : public ISubject
{
private:
    CinemaC()
    {
        movies = vector<MovieC>(5);
        for (int i = 1; i <= 5; i++)
        {
            halls[i] = vector<Hall>(5);
        }
    }
    static CinemaC *cinema;
    vector<ShowTime> showtimes;
    // map<int, vector<Hall>> halls;
    vector<MovieC> movies;
    vector<Iobserve> customers;

public:
    void Attach(Iobserve observer) override
    {
        customers.push_back(observer);
    }
    void Notify() override
    {
    }
    static CinemaC &getInstance()
    {
        if (!cinema)
        {
            cinema = new CinemaC();
        }
        return *cinema;
    }
    Hall getHallId(int showtime, int id)
    {
        return halls[showtime][id - 1];
    }
    void addMovie(MovieC movie)
    {
        movies.emplace_back(movie);
    }
    void showMovies()
    {
        for (auto x : showtimes)
        {
            cout << x.date << " " << x.time << " " << x.screenNum << endl;
            x.gethalls().printSeats();
        }
    }
};