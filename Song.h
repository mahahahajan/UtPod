#include <cstdlib>
#include <iostream>
#include <string>



class Song {
   private:
	static const int NO_MEMORY = -1;
	static const int NOT_FOUND = -2;
	static const int MAX_MEMORY = 512;

    string title;
	string artist;
	int size;

   public:
	

    Song();

    Song(int size);

    Song(string title, string artist, int size);

//     set and get all instance variables
// overload ==, <,and > operators (used in sorting)
// for < and > use artist, then title, then size
    string getTitle() const;
    string setTitle();

    string getArtist() const;
    string setArtist();

    int getSize() const;
    int setSize();

   bool operator >(Song const &s) const;
   bool operator <(Song const &s) const;
   bool operator ==(Song const &s) const;

    

    
};