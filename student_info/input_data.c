#include<stdio.h>
#include"main.h"

void input_data(student *s1, int count)
{
	for(int i = 0;i < count; i++)
	{
		printf("Student%d name: ", i+1);
		scanf("%s", s1[i].name);
		printf("Student%d branch: ", i+1);
		scanf("%s", s1[i].branch);
		printf("Student%d CGPA: ", i+1);
		scanf("%f", &s1[i].cgpa);
	}
}
