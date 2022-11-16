#include <stdio.h>
//지역변수
int hour;
int minute;
int minuteAdd;

void counter()
{
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
}

int main(void)
{
	printf("슛� 입력하세요:");
	scanf("%d", &hour);
	printf("분를 입력하세요:");
	scanf("%d", &minute);
	printf("더할 분을 입력하세요:");
	scanf("%d", &minuteAdd);
	counter();
	printf("%d시 %d분 입니다.",hour, minute);

    return 0; 	
}
