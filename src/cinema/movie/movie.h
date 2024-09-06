//
// Created by Ahmed Abdelaziz on 9/6/2024.
//

#ifndef CINEMAAPP_MOVIE_H
#define CINEMAAPP_MOVIE_H
#include "string"
using namespace std;
class Movie {
    string m_name;
    string m_genre;
public:
    Movie(){}
    Movie(string name, string genre);
    string getName();
    string getGenre();
};


#endif //CINEMAAPP_MOVIE_H
