all: main.o print.o sort.o
	gcc main.o print.o sort.o -o all
main.o: main.c
	gcc -c main.c
print.o: print.c
	gcc -c print.c
sort.o: sort.c
	gcc -c sort.c
clean:
	rm all *.o

