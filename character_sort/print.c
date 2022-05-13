#include<stdio.h>
#include"main.h"

void print_char(ch_arr *s1)
{
	for(int i = 0;i < size;i++)
	{
		printf("%c ", s1[i].ch);
	}
	printf("\n");
}

