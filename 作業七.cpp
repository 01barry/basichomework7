#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{
	int D,io=1,sd=0;
	do
	{
		printf("�q�X1+2+....+n���`�M\n"); 
		printf("�п�Jn�Ȭ��G"); 
		scanf("%d",&D); 
	}
	while (D<=0);  
	do 
	sd+=io++; 
	while (io <= D);
	printf("1+2+...+%d=%d\n",D,sd);
	system("pause"); 
	return 0; 
	
}
