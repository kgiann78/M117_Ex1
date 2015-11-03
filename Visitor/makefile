CC=g++
FLAGS = -Wall -Werror
PROG = vehicle_visitor

HDRS = Vehicle.h BMW.h MercedesBenz.h Engine.h VehicleVisitor.h StartVisitor.h StopVisitor.h AccelerateVisitor.h BreakingVisitor.h
SRCS = Main.cpp Engine.cpp BMW.cpp MercedesBenz.cpp

all : $(SRCS) $(HDRS)
	$(CC) $(FLAGS) -o $(PROG) $(SRCS)

clean:
	rm -f core $(PROG)

run:
	./$(PROG)
