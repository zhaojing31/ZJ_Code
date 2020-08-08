#include<stdio.h>

void main()
{
	int i = 0;
	for (i=0; i < 100; i++)
	{
		if ((i % 10 == 9) || ((i / 10) == 9))
			printf("%d  ",i);
	}
}