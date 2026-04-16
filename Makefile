CXX = g++
CXXFLAGS = -std=c++17 -I.

SRC = main.cpp Log/*cpp CardType/*/*cpp Player/*cpp Game/*cpp Enums/*cpp

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o main $(shell sdl2-config --cflags --libs)

run:
	./main

clean:
	rm -f main
