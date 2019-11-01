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

// Default constructor will call other constructor but with the proper size
UtPod::UtPod() {
	memSize = MAX_MEMORY;
	songs = NULL;
}

// Sets size, sets HeadPointer for LL to null
UtPod::UtPod(int size) {
	if (size > 512 || size <= 0) {
		memSize = MAX_MEMORY;
	} else {
		memSize = size;
	}
	songs = NULL;
}

int UtPod::addSong(Song const &s) {
	if ((memSize - s.getSize()) < 0) {
		// out of space :(
		return -1;
	} else {
		// Put the song in here somehow
		SongNode *newNode = new SongNode;
		newNode->s = s;
		newNode->next = songs;
		songs = newNode;
		//memSize -= s.getSize(); //TODO: Figure out some other way to do this

		return 0;
	}
	return -1;
}

int UtPod::removeSong(Song const &s) { return -1; }

void UtPod::shuffle() {
	// if (numSongs > 2) {
	// 	// Do something
	// } else {
	// 	cout << "Not enough songs" << endl;
	// }
}

void UtPod::showSongList() {}

void UtPod::sortSongList() {}

void UtPod::clearMemory() {
	while(songs != NULL){
		SongNode* tempSong = new SongNode;
		tempSong = songs;
		SongNode* next = tempSong -> next;
	}
}
int UtPod::getRemainingMemory() {}

UtPod::~UtPod() {
	clearMemory();
}