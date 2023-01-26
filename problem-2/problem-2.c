#include <stdio.h>
#include <math.h>

/*
	Fibonacci Sequence
*/

int fib(int n)
{
	double termA = pow(((1 + sqrt(5)) / 2), n);
	double termB = pow(((1 - sqrt(5)) / 2), n);
	double factor = 1 / sqrt(5);
	return round(factor * (termA - termB));
}

int main()
{
	printf("%d\n", fibonacci(0));
	int sum = 0;
	for (int i = 0; i < 34; i++)
	{
		if (fib(i) > 4000000) break;
		if (fib(i) % 2 == 0)
		{
			printf("%d\n", fib(i));
			sum = sum + fib(i);
		}
	}
	printf("%d\n", sum);
	return 0;
}
