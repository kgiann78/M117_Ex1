CC=g++
FLAGS = -Wall -Werror
PROG = observer

HDRS = Notifier.h PropertyEventArgument.h HumiditySensor.h
SRCS = Notifier.cpp Controller.cpp HumiditySensor.cpp

all : $(SRCS) $(HDRS)
	$(CC) $(FLAGS) -o $(PROG) $(SRCS)

clean:
	rm -f core $(PROG)

run:
	./$(PROG)
