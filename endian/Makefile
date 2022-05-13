all: main.o check.o
        gcc main.c check.c -o all
main.o: main.c
        gcc -c main.c
check.o: check.c
        gcc -c check.c
clean:
	rm -f *.o
              
