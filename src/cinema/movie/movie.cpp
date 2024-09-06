//
// Created by Ahmed Abdelaziz on 9/6/2024.
//


#include "movie.h"


Movie::Movie(string name, string genre)
{
m_name = name;
m_genre = genre;
}
string Movie::getName()
{
    return m_name;
}
string Movie::getGenre() {
    return m_genre;
}
