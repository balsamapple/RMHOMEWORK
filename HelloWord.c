/*����誵�RMzuoye2
��ʹ�����������ѭ������дһ��HelloWorld����
��ĿҪ���ޡ�
����Ҫ���û���ѭ������ - 1��0��1��
���Ҫ�󣺵����� - 1ʱ�������˳�������0ʱ�������helloworld��������Ҫ������ţ���������1ʱ�������HELLOWORLD����*/
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
