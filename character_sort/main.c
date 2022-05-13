#include<stdio.h>
#include"main.h"

int main()
{
	ch_arr s1[size];
	printf("Enter characters: ");
	for(int i = 0;i < size;i++)
	{
		scanf(" %c", &s1[i].ch);
	}
	printf("Before sorting: ");
	print_char(s1);
	sort(s1);
	printf("After sorting: ");
	sort(s1);
	print_char(s1);
}

