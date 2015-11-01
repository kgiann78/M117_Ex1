CC=g++
FLAGS = -Wall -Werror
PROG = bridge

HDRS = Engine.h EnginePetrol.h EngineDiesel.h Vehicle.h BMWVehicle.h MercedesBenzVehicle.h
SRCS = Main.cpp EnginePetrol.cpp EngineDiesel.cpp BMWVehicle.cpp MercedesBenzVehicle.cpp

all : $(SRCS) $(HDRS)
	$(CC) $(FLAGS) -o $(PROG) $(SRCS)

clean:
	rm -f core $(PROG)

run:
	./$(PROG)
