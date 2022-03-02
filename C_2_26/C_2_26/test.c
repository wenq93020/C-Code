// 包含一个叫stdio.h的文件
// std-标准 standard 
// i-输入 input 
// o-输出 output
//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {

	{
		int a = 10;
		printf("%d\n", a);// ok
	}
	//printf("%d\n", a);// error
	return 0;
}


//int main() {
//	// 未声明的标识符
//	// 声明
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int num = 0;
//
//	printf("num = %d\n", num);
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	// 计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//	// 输入数据
//	scanf("%d%d",&num1,&num2);// &-取地址符号
//	int sum = 0;
//	sum = num1 + num2;
//
//	printf("sum = %d\n", sum);
//
//	system("pause");
//	return 0;
//}

//int main() {
//	//printf("%d\n", a);
//
//	system("pause");
//	return 0;
//}

//int a = 100;
//int main() {
//	int a = 10;
//	// 局部变量和全局变量的名字相同的时候 局部变量优先
//	printf("%d\n", a);
//
//	system("pause");
//	return 0;
//}

//int num2 = 20;// 全局变量-定义在代码块(大括号)之外的变量
//
//int main() {
//	int num1 = 10;// 局部变量-定义在代码块(大括号)内部的变量
//}

//int main() {
//	// 年龄
//	// 20
//	short age = 20;// 向内存申请两个字节 = 16个字节 用来存放20这个数据
//	float weight = 96.4f;// 向内存申请四个字节 存放小数
//
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	// 不同数据类型向内存申请的空间大小
//	printf("%d\n", sizeof(char));// 1字节
//	printf("%d\n", sizeof(short));// 2字节
//	printf("%d\n", sizeof(int));// 4字节
//	printf("%d\n", sizeof(long));// 4字节
//	printf("%d\n", sizeof(long long));// 8字节
//	printf("%d\n", sizeof(float));// 4字节
//	printf("%d\n", sizeof(double));// 8字节
//
//	system("pause");
//	return 0;
//}

// char-字符类型
//int main() {
//	//char ch = 'A';
//	//int i = 20;
//	//printf("%c\n",ch);// %c —— 打印字符格式的数据
//
//	//short int - 短整型
//	//int - 整型
//	//int age = 20;
//	//printf("%d\n", age);//%d —— 打印整数十进制数据
//	//long - 长整型
//
//	// %d - 打印整型
//	// %c - 打印字符
//	// %f - 打印小数
//	// %p - 以地址的形式打印
//	// %x - 打印十六进制
//	// ...
//
//	//long num = 1000000000;
//	//printf("%d\n", num);
//	//float f = 3.14;
//	//printf("%f\n", f);
//
//	/*double d = 5.0;
//	printf("%lf\n", d);*/
//
//	system("pause");
//	return 0;
//
//}

//int main() //主函数-程序的入口-main函数有且只有一个
//{
//	// 这里完成任务
//	// 在屏幕上输出Hello World! 并换行
//	// 函数-print(打印) function(方法) —— printf
//	// 库函数-C语言本身提供给我们使用的函数
//	// 别人的东西-打招呼
//	// #include
//	printf("Hello World!\n");
//
//	system("pause");
//	return 0;
//}

// main函数框架
// int是整数的意思
// main前面的int表示main函数调用返回一个整型值
//int main() {
//	return 0;// 返回 0
//}

// 这种写法已经过时了
//void main() {
//	
//}
