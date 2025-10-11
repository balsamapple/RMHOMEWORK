/*杨佩瑾的RMzuoye2
请使用条件语句与循环语句编写一个HelloWorld程序。
题目要求：无。
输入要求：用户可循环输入 - 1，0，1。
输出要求：当输入 - 1时，程序退出；输入0时，输出“helloworld”（不需要输出引号）；当输入1时，输出“HELLOWORLD”。*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int input;
	while (1) {
		scanf("%d", &input);
		if (input == -1) {
			break;
		}
		else if (input == 0) {
			printf("helloworld\n");
		}
		else if (input == 1) {
			printf("HELLOWORLD\n");
		}
	}
	return 0;
}
