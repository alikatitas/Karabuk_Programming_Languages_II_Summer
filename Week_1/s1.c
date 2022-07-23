/*
Output:
x=10, y=20
x=11, y=41
x=11, y=20
x=5
*/
#include <stdio.h>

int x = 5; //global variable

int main() {
	{
		int x = 10, y = 20; //local variables
		{
			printf("x=%d, y=%d\n", x, y); // x=10 & y=20
			{
				int y = 40; // scope variables

				x++; //postincrement of x
				y++; //postincrement of y

				printf("x=%d, y=%d\n", x, y); // x=11 & y=41
			}
			printf("x=%d, y=%d\n", x, y); //x=11 & y=20
		}

	}
	printf("x=%d\n", x); //out of scope so x=5

	return 0;

}
