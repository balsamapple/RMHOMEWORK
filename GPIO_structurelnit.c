#include<stdio.h>

//�����ú���
void GPIO_Structurelnit(struct GPIO_Struct* a);

//����һ��ö������
typedef enum 
{
	GPIO_Speed_2MHz, 
    GPIO_Speed_10MHz, 
    GPIO_Speed_50MHz
};

//����һ���ṹ��
typedef struct GPIO_Struct
{
	int GPIO_Speed;
};

int main()
{
	struct GPIO_Struct a;
    GPIO_Structurelnit(&a);

	return 0;
}


void GPIO_Structurelnit(struct GPIO_Struct* a)
{
	a->GPIO_Speed = GPIO_Speed_2MHz;
}