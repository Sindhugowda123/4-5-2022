#include<stdio.h>
#include"main.h"

int main()
{
	int size = student_count();
	student s1[size];
	input_data(s1, size);
	print_data(s1, size);
}

