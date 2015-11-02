CC=g++
FLAGS = -Wall -Werror
PROG = bridge

HDRS = Engine.h EnginePetrol.h EngineDiesel.h Vehicle.h BMW.h MercedesBenz.h
SRCS = Main.cpp EnginePetrol.cpp EngineDiesel.cpp BMW.cpp MercedesBenz.cpp

all: $(SRCS) $(HDRS)
	$(CC) $(FLAGS) -o $(PROG) $(SRCS)

clean:
	rm -f core $(PROG)

run:
	./$(PROG)
