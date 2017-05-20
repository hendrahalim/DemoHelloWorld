#include<stdio.h>

int add(int a, int b);
int div(int a, int b);
int minus(int a, int b);

void main()
{
	int num1 = 1;
	int num2 = 5;

	int result = add(num1, num2);

	printf("hasil: %d", result);
}

int add(int a, int b) {
	return a + b;
}
int div(int a, int b) {
	return a / b;
}
int minus(int a, int b) {
	return a - b;
}
int kurang(int a, int b) {
	return a - b;
}