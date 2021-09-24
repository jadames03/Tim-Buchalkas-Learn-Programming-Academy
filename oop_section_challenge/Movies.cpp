#include "Movies.h"
#include <iostream>

bool Movies::add_movie(std::string name, std::string rating, int watched){
    for(Movie &movie: movies){
        if(movie.get_name() == name){
                std::cout << name << " already exists" << std::endl;
                return false;
        }
    }

    Movie add{name, rating, watched};
    movies.push_back(add);
    std::cout << name << " added" << std::endl;
    return true;
}


bool Movies::increment_watched(std::string name){
    for(auto &movie: movies){
        if(movie.get_name() == name){
            movie.increment_watched();
            return true;
        }
    }

    return false;
}

void Movies::display(){
    if(movies.size() == 0){
       std::cout << "Sorry, no movies to display...\n" << std::endl;
    }
    else{
        std::cout << "\n===================================" << std::endl;
        for(auto movie: movies){
            movie.movie_display();
            std::cout << std::endl;
        }
        std::cout << "===================================\n" << std::endl;
    }

}
