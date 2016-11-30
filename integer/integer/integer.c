#include<stdio.h>

int main() 
{
/*
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);

	return 0; 
	*/

	char num1 = -10; //1바이트 부호 있는 정수형으로 변수를 선언하고 값할당 -128~127
	short num2 = 30000; //2바이트 부호 있는 정수형 변수 -32768~32767
	int num3 = -1234567890;
	long num4 = 1234567890;
	long long num5 = -1234567890123456789;

	printf("%d %d %d %ld %lld\n",num1,num2,num3,num4,num5);

		return 0;

}