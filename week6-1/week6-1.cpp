#include<stdio.h>

int most(int x, int y, int z) {
	if (x >= y and x >= z)
		return x;
	else if (y >= x and y >= z)
		return y;
	else
		return z;
}

int main() {
	int a,b,c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d", most(a, b, c));
	return 0;
}