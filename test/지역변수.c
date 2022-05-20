#include <stdio.h>

void assign (void);

int main (void)
{
	auto int a= 0;
	assign();
	printf("main 함수 a : %d",a);
	
	return 0;
}
void assign (void)
{
	int a;
	a = 10;
	printf("assign 함수 a : %d\n",a);
}

//두 함수에서 같은 이름의 지역변수를 사용한 경우

