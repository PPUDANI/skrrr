#include<stdio.h>
int piramid(int a)
{
	int i, j;
	for(i=0;i<a;++i){
	    for(j=0;j<=i;j++){
	    	printf("%d",j+1);
		}
		printf("\n");
	}
}
int main(void)
{
	int a;
	printf("���ڸ� �Է��� �ּ���.");
	scanf("%d",&a);
	piramid(a); 
	return 0;
} 
