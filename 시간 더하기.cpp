#include <stdio.h>
//��������
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
	printf("��� �Է��ϼ���:");
	scanf("%d", &hour);
	printf("�и� �Է��ϼ���:");
	scanf("%d", &minute);
	printf("���� ���� �Է��ϼ���:");
	scanf("%d", &minuteAdd);
	counter();
	printf("%d�� %d�� �Դϴ�.",hour, minute);

    return 0; 	
}
