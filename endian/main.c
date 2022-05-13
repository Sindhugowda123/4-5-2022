#include<stdio.h>
#include"check.h"

void check_endian(e1 s1);

int main()
{
        e1 end;
        end.data=1;
        end.ch =(char *)&end.data;
        check_endian(end);
        return 0;
}
