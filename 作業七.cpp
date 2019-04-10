#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{
	int D,io=1,sd=0;
	do
	{
		printf("秀出1+2+....+n的總和\n"); 
		printf("請輸入n值為："); 
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
