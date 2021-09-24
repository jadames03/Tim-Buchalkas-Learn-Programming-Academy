#include "Movie.h"
#include <iostream>
#include <string>
//implementation of ctor, cctor and dctor
Movie::Movie(std::string name, std::string rating, int watched)
 : name(name), rating(rating), watched(watched){
}
Movie::Movie(const Movie &source)
 : Movie(source.name, source.rating, source.watched){}
Movie::~Movie(){}

//implementation of setters and getters
void Movie::set_name(std::string n){name = n;}
std::string Movie::get_name(){return name;}

void Movie::set_rating(std::string r){rating = r;}
std::string Movie::get_rating(){return rating;}

void Movie::set_watched(int n){watched = n;}
int Movie::get_watched(){return watched;}

void Movie::increment_watched(){
    ++watched;
    std::cout << "\n===================================" << std::endl;
    std::cout << "You have watched " << name << " " << watched << " times now" << std::endl;
    std::cout << "===================================\n" << std::endl;
    }

void Movie::movie_display(){
    std::cout << name << ", " << rating << ", " << watched;
}

