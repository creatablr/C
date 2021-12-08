#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//作用域和生命周期
int g_val = 2021;
int main() {
	printf("hehe\n");
	int a = 10;
	printf("a=%d\n", a);
	{
	}

	return 0;
}