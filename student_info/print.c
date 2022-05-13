#include<stdio.h>
#include"main.h"

void print_data(student *s1, int count)
{
	printf("--------------Student details------------------\n");
	for(int i = 0;i < count; i++)
	{
		printf("Student%d name: %s\n", i+1, s1[i].name);
		printf("Student%d branch: %s\n", i+1, s1[i].branch);
		printf("Student%d CGPA: %f\n", i+1, s1[i].cgpa);
		printf("--------------------------------------------------\n");
	}
}


