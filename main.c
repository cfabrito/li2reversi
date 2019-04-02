#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int mult(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a/b;
}

int main(int argc, char *argv[])
{
	printf("Hello, reversi!");
	printf("sum(1, 1): %d", sum(1,1));

    printf("mult(2, 2): %d", mult(2, 2));
}
