CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = Lab07
SRCS = main.cpp Cylinder.cpp
OBJS = main.o Cylinder.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) *.o
