/**----------------------------------------------------------------------------
FileName: main.cpp
Author: Stephen Deguchi
Student ID#: 1672539
1/23/17
Main for Bacon Number program

 The program Kevin Bacon Game will read from a file of actors that contains all
 the movies the actor has played in. For each actor read, an actor object,
 which contains pointers to each of the movies they played in, will be added
 to the graph consisting of a hashmap of names as keys and actors for values.
 The actors movies will be added to a BSTree for storage if its not already
 in the tree and will contain pointers to each actor that appeared in it.
 After the data file has been read in, the graph class will call setBaconNum
 which will use a recursive helper function to do a breadth first traversal
 of the graph using the Kevin Bacon actor object as the starting point vertex,
 and will set the Bacon number to all the actors who played in his films to 1.
 Each subsequent traversal will increase the Bacon number by 1 until all the
 actor objects have been visited. After an actor vertex has been traversed,
 the visited Boolean will be set to true, so no vertices will be traversed
 more than once.

 *Input: consists of characters read from cin. A text file containing actor
 	names and their movies

 *Output: Prints out each actor in alphabetical order with their Bacon number

 *Usage: Takes a text file as an argument and reads characters in one at a time
  	to build a graph. Then calculates Bacon numbers and prints them out

 *Assumptions: Text file read in will be in correct format. Text file won't
 	contain duplicate actors

 *Description of algorithms and variables:
 	-Breadth-first search will be used to traverse the tree.
	-Character reading will disregard anything enclosed in [] or <>
*/
#include <fstream>
#include "Graph.h"

int main(int argc, char* argv[]) {

	if(argc!=2){
		cout<<"usage: "<<argv[0]<<" <filename>\n";
	}
	else {
		ifstream file(argv[1]);

		if (!file.is_open()) {
			exit(1);
		}

		//graph that contains actors and movies
		Graph game;

		//parse movies and actors until the end of the file
		while (!file.eof()) {
			//temp actor* to insert into the map
			Actor *act;

			//get a line at a time from the file and save it to the string
			string line;
			getline(file, line);

			//starting position in the line
			int position = 0;

			//check to see if the line has more than \n
			if (line != "") {
				string name;
				string movie;

				//get the text before the tab and push it into name
				while (line[position] != '\t') {
					name.push_back(line[position]);
					position++;
				}

				//create a new actor with name and add it to the map
				act = new Actor(name);
				game.add(act);

				//skip over all the consecutive tabs
				while (line[position] == '\t') {
					position++;
				}
				//get the name of the movie before any extra info
				while (position < line.length() && line[position] != '[' &&
				       line[position] != '<') {

					//check to see if character is a '('
					if (line[position] != '(') {

						//push the character into the movie
						movie.push_back(line[position]);
						position++;
					}
						//the character is a '('
					else {
						//put the '(' in movie
						movie.push_back(line[position]);
						position++;

						//check the data inside the parenthesis
						while (line[position] != ')') {

							//if the data is a digit, add it to movie
							if (isdigit(line[position])) {
								movie.push_back(line[position]);
								position++;

								//data is not a number, skip it
							} else {
								position++;
							}
						}
						//put the ')' in movie
						movie.push_back(line[position]);
						position++;

						//if the parenthesis is empty, delete it
						if (movie.at(movie.length() - 2) == '(') {
							movie.erase(movie.length() - 2, 2);
						}
					}
				}
				//erase spaces at the end of the movie name
				while (movie.at(movie.length() - 1) == ' ') {
					movie.erase(movie.length() - 1);
				}

				//add the movie to the tree
				game.addMovie(movie, act);

				//check to see if the actor has additional movies on the next line
				while (file.peek() == '\t') {

					//erase movie and line
					line = "";
					movie = "";

					//get the next line and set the starting point to it
					getline(file, line);
					position = 0;

					//skip through consecutive tabs
					while (line[position] == '\t') {
						position++;
					}
					//add the name to movie excluding extra info
					while (position < line.length() && line[position] != '[' &&
					       line[position] != '<') {

						//check to see if character is a '('
						if (line[position] != '(') {

							//push the character into the movie
							movie.push_back(line[position]);
							position++;
						}
							//the character is a '('
						else {
							//put the '(' in movie
							movie.push_back(line[position]);
							position++;

							//check the data inside the parenthesis
							while (line[position] != ')') {

								//if the data is a digit, add it to movie
								if (isdigit(line[position])) {
									movie.push_back(line[position]);
									position++;

									//data is not a number, skip it
								} else {
									position++;
								}
							}
							//put the ')' in movie
							movie.push_back(line[position]);
							position++;

							//if the parenthesis is empty, delete it
							if (movie.at(movie.length() - 2) == '(') {
								movie.erase(movie.length() - 2, 2);
							}
						}
					}

					//erase spaces at the end
					while (movie.at(movie.length() - 1) == ' ') {
						movie.erase(movie.length() - 1);
					}

					//add the movie to the tree
					game.addMovie(movie, act);
				}
			}
		}



		//find the actor's bacon numbers
		game.setBaconNum();

		//display the actor's Bacon numbers
		game.display();

		//close file
		file.close();
	}
		return 0;

}