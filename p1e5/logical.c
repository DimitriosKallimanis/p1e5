#include <stdio.h>

int main (void)

{
	int a, b;
	printf ("Dwse 2 akeraious arithmous\n");
	scanf ("%d%d", &a, &b);
	if (a>=5 && a<=10 && b>=5 && b<=10)
	{
		printf ("perases to mathima!\n");
	}
	else if (a>10 || a<0 && b>=5)
	{
		printf ("lathos vathmos a");
	}
	else if (b>10 || b<0 && a>=5)
	{
		printf ("lathos bathmos b");
	}
	return 0;
}
