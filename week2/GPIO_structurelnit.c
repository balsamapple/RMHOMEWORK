#include<stdio.h>

//先引用函数
void GPIO_Structurelnit(struct GPIO_Struct* a);

//创建一个枚举类型
typedef enum 
{
	GPIO_Speed_2MHz, 
    GPIO_Speed_10MHz, 
    GPIO_Speed_50MHz
};

//创建一个结构体
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
