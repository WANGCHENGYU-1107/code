#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(0));
	int a,b,i=5,max=100,min=1;
	a=rand()%100+1;
	printf("�п�J1~100���۵M��:");
	scanf("%d",&b);
	while(i>=1){
		if(b==a){
			printf("�C���ӧQ�A���T���׬�%d",a);
			break;
		}
		else if(b<min||b>max){
			printf("���~");
			break;
		}
		else if(b<a){
			min=b+1;
			printf("�ٳѤU%d�����|�A�п�J%d~%d���۵M��:",i,min,max);
			scanf("%d",&b);
		}
		else if(b>a){
			max=b-1;
			printf("�ٳѤU%d�����|�A�п�J%d~%d���۵M��:",i,min,max);
			scanf("%d",&b);
		}
		i--;
	}
	printf("�C�������A���T���׬�%d",a);
}
