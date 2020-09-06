#include<stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	for (x = 1; x <= 10000; x++) {
		for (int i = 1; i < x; i++)
		{
			if (x % i == 0) {
				y += i;
			}
		}
		if (y == x) {
			printf("%d ", x);
		}
		y = 0;
	}
}
