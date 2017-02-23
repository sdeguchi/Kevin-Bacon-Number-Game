/**----------------------------------------------------------------------------
FileName: MovieTree.h
Author: Stephen Deguchi
Student ID#: 1672539
1/23/17
Storage container for the movies being read in from the data file
*/

#ifndef KB_MOVIETREE_H
#define KB_MOVIETREE_H

#include "Movie.h"
#include "Actor.h"

class MovieTree {

public:
//-----------------------------------------------------------------------------
// Constructor
/**
 * Default constructor for MovieTree class, starts out empty with nothing in its
 * root.
 */
	MovieTree();
//-----------------------------------------------------------------------------
// Destructor
/**
 * Destructor for the MovieTree class, calls on MakeEmpty recursive helper to
 * delete all the nodes in the tree and make them null
 */
	~MovieTree();
//-----------------------------------------------------------------------------
// add
/**
 * Adds a movie to the tree
 * @param name: string
 */
	void add(const string, Actor *);

private:

	//node to hold the movie vertex
	struct MovieNode {

		//pointer to left node
		MovieNode *left;

		//pointer to right node
		MovieNode *right;

		//pointer to movie vertex
		Movie *data;

		//MovieNode constructor
		MovieNode(const string);
	};

	MovieNode *root;
//-----------------------------------------------------------------------------
// MakeEmptyHelper
/**
 * Recursive helper function to empty out the tree
 */
	void makeEmptyHelper(MovieNode *&);
//-----------------------------------------------------------------------------
// addHelper
/**
 * Adds a movie to the tree
 * @param name: string
 */
	void addHelper(const string, MovieNode *&, Actor *&);
};

#endif //KB_MOVIETREE_H
