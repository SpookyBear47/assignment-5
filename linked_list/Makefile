# Makefile

# Compiler
CC := g++
# Compiler flags
CFLAGS := -std=c++11

# Source files
SOURCES := linked_list.cpp node.cpp test_linked_list.cpp
# Object files
OBJECTS := $(SOURCES:.cpp=.o)
# Executable file
EXECUTABLE := test_linked_list

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
