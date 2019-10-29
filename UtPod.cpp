// Implement public methods in the UtPod class to:
// addSong(Song s)
// removeSong(Song s)
// shuffle()
// showSongList()
// sortSongList()
// getTotalMemory()
// getRemainingMemory()

#include "UtPod.h"

using namespace std;

//Default constructor will call other constructor but with the proper size
UtPod::UtPod() { UtPod(MAX_MEMORY); }

//Sets size, sets HeadPointer for LL to null
UtPod::UtPod(int size) {
	if (size > 512 || size <= 0) {
		memSize = MAX_MEMORY;
	} else {
		memSize = size;
	}
    songs =  NULL;
}

int UtPod::addSong(Song const &s){
    if(memSize - s.getSize() < 0){
        //out of space :( 
        return -1;
    }
    else{
        //Put the song in here somehow
        SongNode *newNode = new SongNode();
        newNode -> s = s;
        newNode -> next = songs;
        songs = newNode;

    }
}

 /* FUNCTION - int addSong
       * attempts to add a new song to the UtPod
           o returns a 0 if successful
           o returns -1 if not enough memory to add the song

       precondition: s is a valid Song

       input parms -

       output parms -
      */

    //   int addSong(Song const &s);