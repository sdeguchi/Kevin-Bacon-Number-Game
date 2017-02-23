/**----------------------------------------------------------------------------
FileName: Graph.h
Author: Stephen Deguchi
Student ID#: 1672539
1/23/17
Contains the hashmap of actors, BSTree of movies and computes the Bacon number for each actor
*/
#ifndef KB_GRAPH_H
#define KB_GRAPH_H

#include "Actor.h"
#include "Movie.h"
#include "MovieTree.h"
#include <map>
#include <stack>

using namespace std;


class Graph {

public:
//-----------------------------------------------------------------------------
// Constructor
/**
 * Default constructor for Graph class
 * root.
 */
	Graph();
//-----------------------------------------------------------------------------
// Destructor
/**
 * Destructor for the Graph class
 */
	~Graph();

//-----------------------------------------------------------------------------
// add
/**
 * Adds an actor to the hashmap of the graph
 * @param actor : Actor : Actor being added to the graph
 */
	void add(Actor *);
//-----------------------------------------------------------------------------
// addMovie
/**
 * Adds an actor to the hashmap of the graph
 * @param actor : Actor : Actor being added to the graph
 */
	void addMovie(string, Actor *);
//-----------------------------------------------------------------------------
// setBaconNum
/**
 * Calculates the bacon number for each actor and sets it
 */
	void setBaconNum();
//-----------------------------------------------------------------------------
// display
/**
 * displays Bacon numbers
 */
	void display();

private:
	//container for actor vertices
	map<string, Actor *> actors;
	//container for movie vertices
	MovieTree movies;

//-----------------------------------------------------------------------------
// setBaconNumHelper
/**
 * Recursive helper function for setting the Bacon number
 */
	void setBaconNumHelper(int, stack<Actor *> &s);

};

#endif //KB_GRAPH_H