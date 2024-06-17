#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(0));
	int a,b,i=5,max=100,min=1;
	a=rand()%100+1;
	printf("請輸入1~100的自然數:");
	scanf("%d",&b);
	while(i>=1){
		if(b==a){
			printf("遊戲勝利，正確答案為%d",a);
			break;
		}
		else if(b<min||b>max){
			printf("錯誤");
			break;
		}
		else if(b<a){
			min=b+1;
			printf("還剩下%d次機會，請輸入%d~%d的自然數:",i,min,max);
			scanf("%d",&b);
		}
		else if(b>a){
			max=b-1;
			printf("還剩下%d次機會，請輸入%d~%d的自然數:",i,min,max);
			scanf("%d",&b);
		}
		i--;
	}
	printf("遊戲結束，正確答案為%d",a);
}
