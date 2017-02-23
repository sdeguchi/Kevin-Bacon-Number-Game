/**----------------------------------------------------------------------------
FileName: Actor.cpp
Author: Stephen Deguchi
Student ID#: 1672539
1/23/17
Vertex that contains the actor data, flag to see if the vertex has been
visited, Bacon number, and list of movies the actor has played in
*/
#include "Actor.h"
#include <iomanip>
//-----------------------------------------------------------------------------
// operator<<
/**
 * Overload the << operator for the Actor class
 * Prints out name and Bacon number
 * @param output : ostream
 * @param actor : Actor : actor to be printed
 * @return ostream output
 */
ostream &operator<<(ostream &output, const Actor &actor) {

	//vertex was never visited doing traversal, actor's number is infinity
	if (actor.baconNum == -1) {
		output << actor.name << setw(int(25 - actor.name.length())) << '\t' << "infinity" << endl;

	//print out the actor's bacon number
	} else {
		output << actor.name << setw(int(25 - actor.name.length())) << '\t' << actor.baconNum << endl;
		//cout <<actor.name<<" path is = "<< actor.path << endl;
	}

	return output;
}
//-----------------------------------------------------------------------------
// Constructor
/**
 * Default constructor for Actor class
 * root.
 */
Actor::Actor(const string name) {

	this->name = name;
	baconNum = -1;
	visited = false;
	path="";
}


//-----------------------------------------------------------------------------
// add
/**
 * Adds a pointer to an actor to list of actors for movie
 * @param movie : &Movie : Movie that actor is in
 */
void Actor::add(Movie *&movie) {

	list<Movie *>::iterator it;
	it = movies.begin();
	//add an edge to an adjacent movie
	movies.insert(it, movie);

}
//-----------------------------------------------------------------------------
// getList
/**
 * Returns the list of movies the actor is in
 * @return movies: list : list of movies the actor is in
 */
list<Movie *> Actor::getList() const {
	return movies;
}
//-----------------------------------------------------------------------------
// setBaconNum
/**
 * Sets the Bacon number for the actor
 */
void Actor::setBaconNum(int count) {
	baconNum = count;
}
//-----------------------------------------------------------------------------
// getVisited
/**
 * Returns visited flag
 * @return visited : boolean
 */
bool Actor::getVisited() const {
	return visited;
}
//-----------------------------------------------------------------------------
// setVisited
/**
 * Flag to see if visited before
 */
void Actor::setVisited() {
	visited = true;
}
//-----------------------------------------------------------------------------
// getName
/**
 * Return actors name
 * @return name : string
 */
string Actor::getName() const {
	return name;
}
//-----------------------------------------------------------------------------
// setName
/**
 * Sets actor's path
 * @return name : string
 */
void Actor::setpath(string path){
	this->path=path;
}
//-----------------------------------------------------------------------------
// getPath
/**
 * Gets actors path
 * @return name : string
 */
string Actor::getpath() const{
	return path;
}