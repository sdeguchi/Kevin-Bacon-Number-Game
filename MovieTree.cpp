/**----------------------------------------------------------------------------
FileName: MovieTree.cpp
Author: Stephen Deguchi
Student ID#: 1672539
1/23/17
Storage container for the movies being read in from the data file
*/
#include "MovieTree.h"
//-----------------------------------------------------------------------------
// Constructor
/**
 * Default constructor for MovieTree class, starts out empty with nothing in its
 * root.
 */
MovieTree::MovieTree() {

	//root of MovieTree
	root = nullptr;

}
//-----------------------------------------------------------------------------
// MovieNode Constructor
/**
 * Default constructor for MovieTree class, starts out empty with nothing in its
 * root.
 */
MovieTree::MovieNode::MovieNode(const string title) {

	//pointer to movie
	data = new Movie(title);

	//Movie nodes children set to null
	left = nullptr;
	right = nullptr;
}
//-----------------------------------------------------------------------------
// Destructor
/**
 * Destructor for the MovieTree class, calls on MakeEmpty recursive helper to
 * delete all the nodes in the tree and make them null
 */
MovieTree::~MovieTree() {

	//call to recursive helper
	makeEmptyHelper(root);
	root = nullptr;
}
//-----------------------------------------------------------------------------
// add
/**
 * Adds a movie to the tree
 * @param name: string
 */
void MovieTree::add(const string name, Actor *actor) {

	//adds a movie to the tree and gives the movie a pointer to an adjacent
	//actor and actor a pointer to the movie
	addHelper(name, root, actor);
}
//-----------------------------------------------------------------------------
// MakeEmptyHelper
/**
 * Recursive helper function to empty out the tree
 */
void MovieTree::makeEmptyHelper(MovieNode *&node) {
	if (node == nullptr)return;

	//delete left subtree
	makeEmptyHelper(node->left);

	//delete right subtree
	makeEmptyHelper(node->right);

	//delete root
	delete node->data;
	delete node;

	node = nullptr;
}
//-----------------------------------------------------------------------------
// addHelper
/**
 * Adds a movie to the tree
 * @param name: string
 */
void MovieTree::addHelper(const string title, MovieNode *&node, Actor *&actor) {

	//found place to add new movie
	if (node == nullptr) {

		//create new movie vertex
		node = new MovieNode(title);

		//add pointers to adjacent movie and actor
		actor->add(node->data);
		node->data->add(actor);

		return;

		//found the movie
	} else if (title.compare(node->data->getTitle()) == 0) {

		//add pointers to adjacent movie and actor
		actor->add(node->data);
		node->data->add(actor);
		return;

		//movie is less than current movie
	} else if (title.compare(node->data->getTitle()) < 0) {

		//move left
		return addHelper(title, node->left, actor);

		//movie is greater than current movie
	} else {

		//move right
		return addHelper(title, node->right, actor);
	}
}
