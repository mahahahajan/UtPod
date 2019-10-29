// For each song we will store the title (string), artist (string),  and size
// (int) in MB the title and artist cannot be blank the size must be greater
// than zero

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Song {
   private:
	static const int NO_MEMORY = -1;
	static const int NOT_FOUND = -2;
	static const int MAX_MEMORY = 512;

   public:
	char title;
	string artist;
	int size;
};