CXX = g++
CXXFLAGS = -Wall -Werror -g -std=c++17 

main: main.cpp
	$(CXX) $(CXXFLAGS) -o main main.cpp

clean:
	rm main
