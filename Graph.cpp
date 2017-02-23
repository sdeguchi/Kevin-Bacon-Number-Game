/**----------------------------------------------------------------------------
FileName: Graph.h
Author: Stephen Deguchi
Student ID#: 1672539
1/23/17
Contains the hashmap of actors, BSTree of movies and computes the Bacon number for each actor
*/
#include "Graph.h"

//-----------------------------------------------------------------------------
// Constructor
/**
 * Default constructor for Graph class
 * root.
 */
Graph::Graph() {

}
//-----------------------------------------------------------------------------
// Destructor
/**
 * Destructor for the Graph class
 */
Graph::~Graph() {

	//iterate through the map
	map<string, Actor *>::iterator it;
	for (it = actors.begin(); it != actors.end(); it++) {

		//delete the actor vertex
		delete it->second;
		it->second = nullptr;
	}
	//clear the actor map
	actors.clear();
}

//-----------------------------------------------------------------------------
// add
/**
 * Adds an actor to the hashmap of the graph
 * @param actor : Actor : Actor being added to the graph
 */
void Graph::add(Actor *actor) {
	//insert the vertex into the map
	actors.insert({actor->getName(), actor});

}
//-----------------------------------------------------------------------------
// addMovie
/**
 * Adds a movie to the movie tree
 * @param title: string: title of the movie being added to the tree
 * @param actor : Actor : pointer to actor being added to the hashmap
 */
void Graph::addMovie(string title, Actor *actor) {
	//insert a movie into the movietree
	movies.add(title, actor);

}
//-----------------------------------------------------------------------------
// display
/**
 * displays Bacon numbers
 */
void Graph::display() {

	//iterator to iterate through the map
	map<string, Actor *>::iterator it;

	for (it = actors.begin(); it != actors.end(); it++) {
		Actor *act = it->second;

		//print out the actor
		cout << *act;
	}
}
//-----------------------------------------------------------------------------
// setBaconNum
/**
 * Calculates the bacon number for each actor and sets it
 */
void Graph::setBaconNum() {

	//storage for current level of actors
	stack<Actor*> s;

	//get the Kevin Bacon vertex
	Actor *bacon = actors.find("Bacon, Kevin (I)")->second;

	//set Kevin Bacon to visited
	bacon->setVisited();

	//push Kevin Bacon onto stack to set bacon number
	s.push(bacon);

	//call recursive helper to set bacon numbers
	setBaconNumHelper(0, s);
}
//-----------------------------------------------------------------------------
// setBaconNumHelper
/**
 * Recursive helper function for setting the Bacon number
 */
void Graph::setBaconNumHelper(int count, stack<Actor *> &s) {
	//stack for actors adjacent to current level of actor vertices
	stack<Actor *> next;

	//set bacon number while stack of current vertices not empty
	while (!s.empty()) {

		//set actor vertex to count
		Actor *ptr = s.top();
		ptr->setBaconNum(count);

		//iterator to go through edges to movies
		std::list<Movie *> mov = ptr->getList();
		list<Movie *>::iterator itm;

		//loop through each movie and get adjacent actor vertices
		for (itm = mov.begin(); itm != mov.end(); itm++) {

			//iterator to go through actor adges
			std::list<Actor *> act = (*itm)->getList();
			list<Actor *>::iterator ita;

			//loop through each actor to add them to the next stack
			for (ita = act.begin(); ita != act.end(); ita++) {

				Actor *adj = *ita;

				//check to see if vertex has already been visited
				if (!adj->getVisited()) {

					//set the actor to visited
					adj->setVisited();
					//set the path of the actor to Kevin Bacon
					adj->setpath(ptr->getpath()+"=>"+ptr->getName()+" : "+(*itm)->getTitle());
					//add the actor vertex to the next stack
					next.push(adj);
				}
			}

		}

		//finished setting and getting adjacent actors, pop out of the s stack
		s.pop();

	}
	//check to see if there are any unvisited adjacent nodes
	if (!next.empty()) {
		//call recursive helper with next level of vertices and
		//increment the bacon number
		setBaconNumHelper(count + 1, next);
	}
}
