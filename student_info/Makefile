all: main.o student_count.o input_data.o print_data.o
	gcc main.o student_count.o input_data.o print_data.o -o all
main.o: main.c
	gcc -c main.c
student_count.o: student_count.c
	gcc -c student_count.c
input_data.o: input_data.c
	gcc -c input_data.c
print_data.o: print_data.c
	gcc -c print_data.c
clean:
	rm all *.o

