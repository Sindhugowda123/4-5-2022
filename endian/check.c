#include<stdio.h>
#include"check.h"

void check_endian(e1 s1)
{
        if(s1.ch)
        {
                printf("Little endian\n");
        }
        else
        {
                printf("Big endian\n");
        }
}
