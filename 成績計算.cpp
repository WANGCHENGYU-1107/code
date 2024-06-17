#include<stdio.h>
#include<math.h>
int main(void){
	int a,b,dd,d=0,f=0,g=0,h=0,j=0,k=0,l=0;
	
	printf("Τ碭厩ネ:");
	scanf("%d",&dd);
	double sum,average,x,y,result;
	int s[dd];
	for(a=0;a<=(dd-1);a++){
		printf("材%d厩ネΘ罿:",a+1);
		scanf("%d",&s[a]);
		sum=sum+s[a];
	}
	average=sum/dd;
	for(a=0;a<=(dd-1);a++){
	x+=((s[a]-average)*(s[a]-average));
}
y=x/dd;
result=sqrt(y);
	printf("夹非畉:%f\n",result);
	printf("キА:%f\n",average);
	for(a=0;a<=(dd-1);a++){
		if(s[a]<50){
			d=d+1;
		}
		else if(s[a]>=50&&s[a]<=59){
			f=f+1;
		}
		else if(s[a]>=60&&s[a]<=69){
			g=g+1;
		}
        else if(s[a]>=70&&s[a]<=79){
			h=h+1;
		}
		else if(s[a]>=80&&s[a]<=89){
			j=j+1;
		}
        else if(s[a]>=90&&s[a]<=99){
			k=k+1;
		}
		else if(s[a]>=100){
			l=l+1;
		}
	}
	printf("50だ计:%d\n",d);
	printf("50~59だ计:%d\n",f);
	printf("60~69だ计:%d\n",g);
	printf("70~79だ计:%d\n",h);
	printf("80~89だ计:%d\n",j);
	printf("90~99だ计:%d\n",k);
	printf("100だ计:%d\n",l);
}

