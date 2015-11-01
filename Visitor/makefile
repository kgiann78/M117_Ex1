CC=g++
FLAGS = -Wall -Werror
PROG = visitor

HDRS = StudyCaseVisitorInterface.h StudyCaseInterface.h Class1.h Class1VisitorImplementation.h
SRCS = Main.cpp Class1.cpp

all: $(SRCS) $(HDRS)
		$(CC) $(FLAGS) -o $(PROG) $(SRCS)

clean:
	rm -f core $(PROG)

run:
	./$(PROG)
