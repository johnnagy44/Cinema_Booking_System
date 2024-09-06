//
// Created by 3b3z on 9/6/2024.
//

#ifndef CINEMAAPP_CINEMA_H
#define CINEMAAPP_CINEMA_H
#include <string>
#include <vector>
#include <map>
#include "Isubject.h"
#include "../customer/Iobserve.h"
#include "movie/movie.h"
#include "showtime/showtime.h"
using namespace std;
class Cinema : public ISubject
{
private:
    static Cinema *cinema;
    vector<ShowTime> showtimes;
    // map<int, vector<Hall>> halls;
    vector<Movie> movies;
    vector<Iobserver*> customers;
    Cinema();
public:
    void Attach(Iobserver *observer) override;
    void Notify() override;
    static Cinema &getInstance();
    void addMovie(Movie movie);
    void showMovies();
    ShowTime getShowTimeById(int id);
};
#endif //CINEMAAPP_CINEMA_H
