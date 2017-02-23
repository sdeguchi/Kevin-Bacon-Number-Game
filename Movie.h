/**----------------------------------------------------------------------------
 *@File Movie.h test
 *@Author Stephen Deguchi
 *Student ID#: 1672539
 *1/23/17
 *Vertex that contains the movie data and pointers to the actors who played
 *in the movie
 */

#ifndef KB_MOVIE_H
#define KB_MOVIE_H

#include <string>
#include <list>

using namespace std;

class Actor;

class Movie {
//-----------------------------------------------------------------------------
// operator<<
/**
 * Overload the << operator for the WordTree class
 * Prints out all the WordNodes in the tree
 * @param output : ostream
 * @param tree : WordTree : the tree will be printed
 * @return ostream output
 */
	friend ostream &operator<<(ostream &, const Movie &);

public:
	/**-----------------------------------------------------------------------------
	 * Constructor test
	 *
	 * Default constructor for Movie class
	 * root.
	 */
	Movie(const string);

	/**-----------------------------------------------------------------------------
	 * add
	 *
	 * Adds a pointer to an actor to list of actors for movie
	 * @param actor : &Actor : actor that plays in movie
	 */
	void add(Actor *&);

	/**----------------------------------------------------------------------------
	 *getList()
	 *
	 * Returns the list of actor pointer for the movie
	 * @return actors: list : list of actors that play in movie
	 */
	list<Actor *> getList() const;

	/**----------------------------------------------------------------------------
	 *getTitle()
	 *
	 * Returns title of the movie
	 * @return title : string
	 */
	string getTitle() const;

private:

	//title of movie
	string title;

	//pointer or edges to movie vertices
	list<Actor *> actors;
};

#endif //KB_MOVIE_H
