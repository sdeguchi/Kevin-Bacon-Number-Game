/**----------------------------------------------------------------------------
 *@File Movie.cpp
 *@Author Stephen Deguchi
 *Student ID#: 1672539
 *1/23/17
 *Vertex that contains the movie data and pointers to the actors who played in the movie
 */
#include "Movie.h"
#include <iostream>
//-----------------------------------------------------------------------------
// operator<<
/**
 * Overload the << operator for the Actor class
 * Prints out name and Bacon number
 * @param output : ostream
 * @param actor : Actor : actor to be printed
 * @return ostream output
 */
ostream &operator<<(ostream &output, const Movie &movie) {

	//output movie
	output << movie.title;
	return output;
}

/**-----------------------------------------------------------------------------
 * Constructor
 *
 * Default constructor for Movie class
 * root.
 */
Movie::Movie(const string title) {
	this->title = title;
}


/**-----------------------------------------------------------------------------
 * add
 *
 * Adds a pointer to an actor to list of actors for movie
 * @param actor : &Actor : actor that plays in movie
 */
void Movie::add(Actor *&actor) {

	list<Actor *>::iterator it;
	it = actors.begin();

	//add edge to adjacent actor
	actors.insert(it, actor);

}

/**----------------------------------------------------------------------------
 *getList()
 *
 * Returns the list of actor pointer for the movie
 * @return actors: list : list of actors that play in movie
 */
list<Actor *> Movie::getList() const {
	return actors;
}

/**----------------------------------------------------------------------------
 *getTitle()
 *
 * Returns title of the movie
 * @return title : string
 */
string Movie::getTitle() const {
	return title;
}
