//主函数
#include<stdio.h>

//编译+链接+运行代码
//为了看到结果
//计算类型
int main()
	{
//字符类型
	char a = "a";
	int age = 20;
	//短整型
	short num = 10;
	float weight = 55.5;
	double d = 0.0;
	printf("hehe\n");
	printf("比特\n");
	printf("%d\n",100);
	//sizeof-关键字-操作符-计算类型或者所占空间大小
	printf("% d\n", sizeof(char));
	printf("% d\n", sizeof(short));
	printf("% d\n", sizeof(int));
	printf("% d\n", sizeof(long));
	printf("% d\n", sizeof(long long));
	printf("% d\n", sizeof(float));
	printf("% d\n", sizeof(double));
	return 0;

    
}