#include<stdio.h>
void main(){
	int age,i;
	char name[30];
	printf("so tuoi: \n");
	scanf("%d",&age);
	printf("Nhap ten: \n");
	scanf("%s",&name);
	for(i;i<=age;i++){
		printf("%s\t",name);
	}
}
