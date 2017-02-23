/**----------------------------------------------------------------------------
FileName: Actor.h
Author: Stephen Deguchi
Student ID#: 1672539
1/23/17
Vertex that contains the actor data, flag to see if the vertex has been
visited, Bacon number, and list of movies the actor has played in
*/
#ifndef KB_ACTOR_H
#define KB_ACTOR_H

#include <iostream>
#include <string>
#include <list>

using namespace std;

class Movie;

class Actor {
//-----------------------------------------------------------------------------
// operator<<
/**
 * Overload the << operator for the WordTree class
 * Prints out all the WordNodes in the tree
 * @param output : ostream
 * @param tree : WordTree : the tree will be printed
 * @return ostream output
 */
	friend ostream &operator<<(ostream &, const Actor &);

public:
//-----------------------------------------------------------------------------
// Constructor
/**
 * Default constructor for Actor class
 * root.
 */
	Actor(const string);

//-----------------------------------------------------------------------------
// add
/**
 * Adds a pointer to an actor to list of actors for movie
 * @param movie : &Movie : Movie that actor is in
 */
	void add(Movie *&);
//-----------------------------------------------------------------------------
// getList
/**
 * Returns the list of movies the actor is in
 * @return movies: list : list of movies the actor is in
 */
	list<Movie *> getList() const;
//-----------------------------------------------------------------------------
// setBaconNum()
/**
 * Sets the Bacon number for the actor
 */
	void setBaconNum(int);
//-----------------------------------------------------------------------------
// getVisited
/**
 * Returns visited flag
 * @return visited : boolean
 */
	bool getVisited() const;
//-----------------------------------------------------------------------------
// setVisited
/**
 * Flag to see if visited before
 */
	void setVisited();
//-----------------------------------------------------------------------------
// getName
/**
 * Return actors name
 * @return name : string
 */
	string getName() const;
//-----------------------------------------------------------------------------
// setpath
/**
 * Set actor's path
 * @return name : string
 */
	void setpath(string);
//-----------------------------------------------------------------------------
// getpath
/**
 * Gets actor's path
 * @return name : string
 */
	string getpath() const;
private:
	//actor's name
	string name;
	//bacon number
	int baconNum;
	//has vertex been visited
	bool visited;
	//edges to adjacent movies
	list<Movie *> movies;
	string path;
};

#endif //KB_ACTOR_H
