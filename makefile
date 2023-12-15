cc = gcc
cflags = -Wall
source = main.c
executable = myprogram

all: $(executable)

$(executable): $(source)
	$(cc) $(cflags) $(source) -o $(executable)

clean:
	rm -f $(executable)
