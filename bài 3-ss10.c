#include<stdio.h>
void main(){
	int number,i=1;
	printf("nhap so :");
	scanf("%d",&number);
	printf("bang cuu chuong cua :%d\n");
	while(i<=10){
		printf("%d*%d=%d \n",number,i,number*i);
		i++;
	}
}
