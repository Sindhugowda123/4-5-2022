#include<stdio.h>
#include"main.h"

void sort(ch_arr *s1)
{
	for(int i = 0;i < size;i++)
	{
		for(int j = 0;j < size-i-1;j++)
		{
			if(s1[j].ch > s1[j+1].ch)
			{
				int temp = s1[j].ch;
				s1[j].ch = s1[j+1].ch;
				s1[j+1].ch = temp;
			}
		}
	}
}	

