#include <iostream>
#include "Movies.h"
#include "Movie.h"

/*For this challenge I have to develop the foundation for a program
  for movie fanatics to keep track of what movies they have watched
  and how many times they watched each movie.*/

int main(){
    Movies my_movies;
    my_movies.add_movie("Shrek", "PG-13", 4);
    my_movies.add_movie("X-men", "PG-13", 7);
    my_movies.add_movie("Wedding Crashers", "Rated R", 2);

    my_movies.display();

    my_movies.add_movie("Shrek", "PG-13", 4);
    my_movies.add_movie("X-men", "PG-13", 7);


    my_movies.increment_watched("Shrek");
    my_movies.increment_watched("Shrek");

    my_movies.add_movie("The Avengers", "PG-13", 22);

    my_movies.increment_watched("X-men");
    my_movies.increment_watched("Wedding Crashers");

    my_movies.display();


    return 0;
}
