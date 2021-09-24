#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED
#include <string>

class Movie{
private:
    std::string name;
    std::string rating;
    int watched;
public:
    //ctor ,cctor and dctor
    Movie(std::string name = "none", std::string rating = "none", int watched = 0);

    Movie(const Movie &source);

    ~Movie();

    //declaration of setters and getters
    void set_name(std::string);
    std::string get_name();

    void set_rating(std::string);
    std::string get_rating();

    void set_watched(int);
    int get_watched();

    void increment_watched();

    void movie_display();
};



#endif // MOVIE_H_INCLUDED
