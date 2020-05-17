#include<stdio.h>
void main(){
	int i, n , t1=1, t2=1,next;
	printf("nhap so luong : \n");
	scanf("%d",&n);
	printf("Fibonacci : ");
	for(i=1;i<=n;++i){
		printf("\t%d",t1);
		next=t1+t2;
		t1=t2;
		t2=next;
	}
}
