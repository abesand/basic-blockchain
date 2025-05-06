CXX = g++
CXXFLAGS = -Wall -Werror -g -std=c++17 
OBJS = main.o block.o

main: $(OBJS)
	$(CXX) $(CXXFLAGS) -o main $(OBJS)

main.o: main.cpp block.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

block.o: block.cpp block.hpp
	$(CXX) $(CXXFLAGS) -c block.cpp

clean:
	rm *.o
