CXXFLAGS = -g -pedantic -Wall -Wextra -std=c++17 -fPIC
LDFLAGS = -g

SRCS_CPP = Entities.cpp Game.cpp Modes.cpp State.cpp
SRCS_HPP = $(SRCS_CPP:.cpp=.hpp)
OBJS = main.o $(SRCS_CPP:.cpp=.o)

.PHONY: all
all: a.out

a.out: $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $(OBJS)

$(OBJS): $(SRCS_HPP)

.PHONY: clean
clean:
	rm -f *.o a.out
