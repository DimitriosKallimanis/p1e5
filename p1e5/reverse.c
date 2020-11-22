#include <stdio.h>

int main (void)

{
	int a, b, c, d;
	printf ("Dwse 2 akeraious arnitikous arithmous\n");
	scanf ("%d %d", &a, &b);
	if (a>=0 || b>=0)
		{
			printf ("oi times pou edwses einai lathos\n");
		}
	c = a * (-1);
	d = b * (-1);
	printf ("Oi arithmoi pou edwses, alla thetikoi, einai:\n %d \n %d \n", c, d);
	return 0;
}
