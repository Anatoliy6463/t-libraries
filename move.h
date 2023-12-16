#include <stdio.h>
int move(int X, int Y, int in)
{
	in = getchar();
	if (in == 'w') Y++;
	if (in == 'a') X--;
	if (in == 's') Y--;
	if (in == 'd') X++;
	return 0;
}
