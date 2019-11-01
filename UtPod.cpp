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
    if ((getRemainingMemory() - s.getSize()) < 0) {
        // out of space :(
        return NO_MEMORY;
    } else {
        // Put the song in here somehow
        SongNode *newNode = new SongNode;
        newNode->s = s;
        newNode->next = songs;
        songs = newNode;
        //memSize -= s.getSize(); //TODO: Figure out some other way to do this

        return SUCCESS;
    }
    return -1;
}

int UtPod::removeSong(Song const &s) {
    //if song to be removed is the first song
    if(songs == NULL){
        return NOT_FOUND;
    }
    if(songs -> s == s){
        SongNode* tempNode = songs;
        songs = songs -> next;
        delete tempNode;
        return SUCCESS;
    }
    else{
        SongNode* prevNode = songs;
        SongNode* currNode = songs -> next;
        while(currNode != NULL){
            if(currNode -> s == s){
                SongNode* tempNode = currNode;
                prevNode -> next = currNode -> next;
                delete tempNode;
                return SUCCESS;
            }
            prevNode = prevNode -> next;
            currNode = currNode -> next;
        }
        return NOT_FOUND;
    }
}

void UtPod::shuffle() {
    // if (numSongs > 2) {
    // 	// Do something
    // } else {
    // 	cout << "Not enough songs" << endl;
    // }
}

void UtPod::showSongList() {
    SongNode* tempNode = songs;
    while(tempNode != NULL){
        tempNode ->s.print();
        tempNode = tempNode -> next;
    }
}

void UtPod::sortSongList() {}

void UtPod::clearMemory() {
    while(songs != NULL){
        SongNode *tempSong = songs;
        songs = songs -> next;
        delete tempSong;
    }
}
int UtPod::getRemainingMemory() {
    SongNode* tempNode = songs;
    int usedMemory = 0;
    while(tempNode != NULL){
        usedMemory += tempNode->s.getSize();
        tempNode = tempNode -> next;
    }
    return memSize - usedMemory;
}

UtPod::~UtPod() {
    clearMemory();
}