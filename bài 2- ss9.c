#include<stdio.h>
void main(){
	int num1,num2,i,sum=0;
	printf("nhap num1 : \n");
	scanf("%d",&num1);
	printf("nhap num2 : \n");
	scanf("%d",&num2);
	for(i=num1;i<= num2;i+=2){
		sum+=i;
	}
	printf("Tong cac so le tu %d den %d =%d",num1,num2,sum);
}
