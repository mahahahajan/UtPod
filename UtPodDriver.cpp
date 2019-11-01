/* utPod_driver.cpp
Demo Driver for the UtPod.

Roger Priebe
EE 312 10/16/18

This is a basic driver for the UtPod.

You will want to do more complete testing.

*/
#include <cstdlib>
#include <iostream>
#include "Song.h"
#include "UtPod.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << endl;
    cout << "WELCOME" << endl;
    cout << endl;
    UtPod t;
    cout << "Created Pod with memory: " << t.getTotalMemory() << endl;
    Song s1("Brittany Spears", "Toxic", 100);
    int result = t.addSong(s1);
    Song s2("Pitbull", "Hotel Room Service", 12);
    result = t.addSong(s2);
    Song s3("Maroon 5", "Memories", 8);
    result = t.addSong(s3);
    Song s4("Lizzo", "Truth Hurts", 9);
    result = t.addSong(s4);
    Song s5("blackbear", "hot girl bummer", 25);
    result = t.addSong(s5);
    Song s6("blackbear", "IDFC", 13);
    result = t.addSong(s6);

    cout << "Song List: " << endl;
    t.sortSongList();
    t.showSongList();
    
    cout << endl;
    cout << "REMOVE SONG DEMO " << endl;
    result = t.removeSong(s3);
    cout << "SONG DELETED" << endl;
    cout << "New Song List: " << endl;

    t.showSongList();
    cout << "REMAINING MEMORY: " << t.getRemainingMemory() << endl;
    cout << endl;
    cout << "SHUFFLE DEMO" << endl;
    t.shuffle();
    cout << "SHUFFLED LIST: " <<endl;
    t.showSongList();
    
    cout << endl;
    cout << "CLEAR MEMORY DEMO" << endl;
    t.clearMemory();
    cout << "MEMORY CLEARED" << endl;

    UtPod x(400);
    cout << "Created Pod with memory: " << x.getTotalMemory() << endl;
   
    result = x.addSong(s1);
    
    result = x.addSong(s2);
    
    result = x.addSong(s3);
    
    result = x.addSong(s4);
   
    result = x.addSong(s5);

    result = x.addSong(s6);

    cout << "Song List: " << endl;
    x.sortSongList();
    x.showSongList();
    
    // cout << endl;
    // cout << "REMOVE SONG DEMO " << endl;
    // result = x.removeSong(s3);
    // cout << "SONG DELETED" << endl;
    // cout << "New Song List: " << endl;

    // t.showSongList();
    cout << "REMAINING MEMORY: " << x.getRemainingMemory() << endl;
    cout << endl;
    cout << "SHUFFLE DEMO" << endl;
    x.shuffle();
    cout << "SHUFFLED LIST: " <<endl;
    x.showSongList();

    cout << endl;
    cout << "SORTED DEMO" << endl;
    x.sortSongList();
    cout << "SORTED LIST: " <<endl;
    x.showSongList();
    
    cout << endl;
    cout << "CLEAR MEMORY DEMO" << endl;
    x.clearMemory();
    cout << "MEMORY CLEARED" << endl;
}