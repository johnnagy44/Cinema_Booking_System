//
// Created by Ahmed Abdelaziz on 9/6/2024.
//


#include "cinema.h"

Cinema* Cinema::cinema = nullptr;

Cinema::Cinema() {
    showtimes = vector<ShowTime>(5);
}
void Cinema::Notify() {
    for (auto customer: customers) {
        customer->Update();
    }
};

void Cinema::addMovie(Movie movie) {
    movies.emplace_back(movie);
    Notify();
};

Cinema &Cinema::getInstance() {
    if (cinema == nullptr)
    {
        cinema = new Cinema();
    }
    return *cinema;
};

void Cinema::Attach(Iobserver *observer) {
    customers.emplace_back(observer);
}
void Cinema::showMovies() {
    int cnt = 1;
    for (auto movie:movies) {
        cout<<cnt++<<" - "<<movie.getName()<<" "<<movie.getGenre()<<endl;
    }
};
ShowTime Cinema::getShowTimeById(int id) {
    return showtimes[id];
}
