CC=g++
FLAGS = -Wall -Werror
PROG = bridge

HDRS = Engine.h EnginePetrol.h EngineDiesel.h Vehicle.h VehicleDiesel.h VehiclePetrol.h
SRCS = Main.cpp EnginePetrol.cpp EngineDiesel.cpp VehicleDiesel.cpp VehiclePetrol.cpp
OBJS = $(SRCS:.c=.o)

$(PROG) : $(SRCS) $(HDRS)
	$(CC) $(FLAGS) -o $(PROG) $(SRCS)

clean:
	rm -f core $(PROG)

test:
	./$(PROG)
