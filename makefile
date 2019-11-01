final: UtPodDriver.o UtPod.o Song.o
	g++ -g -otest UtPodDriver.o UtPod.o Song.o
driver: UtPodDriver.cpp UtPod.h Song.h
	g++ -g -c UtPodDriver.cpp
UtPod.o: UtPod.cpp UtPod.h Song.h
	g++ -g -c UtPod.cpp
Song.o: Song.cpp Song.h
	g++ -g -c Song.cpp