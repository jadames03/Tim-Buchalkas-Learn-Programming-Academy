#ifndef MOVIES_H_INCLUDED
#define MOVIES_H_INCLUDED
#include "Movie.h"
#include <vector>

class Movies{
private:
    std::vector<Movie> movies;  //models a collection of Movie as std::vector
public:
    bool add_movie(std::string, std::string, int);

    bool increment_watched(std::string);        //declaring other methods

    void display();


};


#endif // MOVIES_H_INCLUDED
