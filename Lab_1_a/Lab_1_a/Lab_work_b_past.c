#include <stdio.h> 

/*
* int main(void) {
	printf("Hello World!");
}
*/


#define _CRT_SECURE_NO_WARNINGS // necessary to ignore scanf_s () warnings
#include <stdio.h> // necessary to use printf () and scanf ()
#include <math.h>
int main(void) // the starting point for all C programs
{

	/*
	int I = 0, R = 0;
	printf("Enter two values for Ohm's Law (I & R): ");
	scanf_s("%d%d", &I, &R);
	printf("%d = Voltage",I * R);
	*/

	/*
	int V = 0, R = 0;
	printf("Enter two values for Joule's Law (V & R): ");
	scanf_s("%d%d", &V, &R);
	printf("%lf", pow(V, 2) / R);
	*/

	/*
	double a = 0, x = 0, b = 0, c = 0, d = 0;
	printf("Enter five values: ");
	scanf_s("%lf%lf%lf%lf%lf", &a, &x, &b, &c, &d);
	printf("%lf", 3 * a*x*3 + (1/4) * b*x*2 + 10 * c*x + (-5) *d);
	*/

	/*
	int pi = 3.14, R = 0;
	printf("Enter R: ");
	scanf_s("%d", &R);
	printf("%d", 2 * pi * R);
	*/

	return 0; // return a success status (value 0) indicating the program worked fine
} // end of the main () function