#define  _CRT_SECURE_NO_WARNINGS 1
//放在代码第一行
#include<stdio.h>

//int main() {
//
//	int age = 20;
//	double weight = 75.3;
//	age = age + 1;
//	printf("%d/f\n", age);
//	printf("%lf\n", weight);
//	return 0;
//
//}
//float=f
//double=lf
//--------------------------------------------
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//
//	return 0;
//
//}
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;

}//scanf对应第一句话才能使用