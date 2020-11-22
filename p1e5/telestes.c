#include <stdio.h>

int main (void)

{
	int a = 4, b = 3, c = 1;
	a += b -= ++c * a--;
	printf ("%d %d %d\n", a, b, c);
	return 0;
	//To a tha parei tin timi -2 dioti o telestis += simainei a = a + b,
	//To b tha parei tin timi 5 dioti o telestis -= simainei b = b - ++c
	//To c tha parei tin timi 2 dioti to c exei ton telesti ++ mprosta tou pou simainei oti tha auksithei kata 1
}
