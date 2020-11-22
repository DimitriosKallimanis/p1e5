#include <stdio.h>

int main (void)

{
	float a, b, c, d;
	char e;
	c = a + b;
	d = a * b;
	printf ("Dwse 2 arithmous kai eite S eite M\n");
	scanf ("%f %f %ch", &a, &b, &e);
	if (e == 'S')  
		{
			c = a + b;
			printf ("%f\n", c);
		}
	else if (e == 'M')
		{
			d = a * b;
			printf ("%f\n", d);
		}	
	return 0;
}
