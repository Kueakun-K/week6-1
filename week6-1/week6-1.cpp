#include<stdio.h>

int most(int x, int y, int z) {
	if (x >= y && x >= z)
		return x;
	else if (y >= x && y >= z)
		return y;
	else
		return z;
}

int main() {
	int a,b,c,s=0;
	scanf_s("%d %d %d", &a, &b, &c);
	while (a != 1 || b != 1 || c != 1)
	{
		if (most(a, b, c) % 2 != 0)
		{
			if (most(a, b, c) == a)
			{
				a -= 1;
				a =a/ 2;
			}
			else if (most(a, b, c) == b)
			{
				b -= 1;
				b = b / 2;
			}
			else if (most(a, b, c) == c)
			{
				c -= 1;
				c = c / 2;
			}
		}
		else if(most(a,b,c)%2==0)
		{
			if (most(a, b, c) == a)
			{
				a = a / 2;
			}
			else if (most(a, b, c) == b)
			{
				b = b / 2;
			}
			else if (most(a, b, c) == c)
			{
				c = c / 2;
			}
		}
		s += 1;
	}
	printf("%d", s);
	return 0;
}
