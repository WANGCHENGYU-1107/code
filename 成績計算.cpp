#include<stdio.h>
#include<math.h>
int main(void){
	int a,b,dd,d=0,f=0,g=0,h=0,j=0,k=0,l=0;
	
	printf("���X��ǥ�:");
	scanf("%d",&dd);
	double sum,average,x,y,result;
	int s[dd];
	for(a=0;a<=(dd-1);a++){
		printf("��%d�Ӿǥͪ����Z:",a+1);
		scanf("%d",&s[a]);
		sum=sum+s[a];
	}
	average=sum/dd;
	for(a=0;a<=(dd-1);a++){
	x+=((s[a]-average)*(s[a]-average));
}
y=x/dd;
result=sqrt(y);
	printf("�зǮt:%f\n",result);
	printf("����:%f\n",average);
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
	printf("50���H�U���H��:%d\n",d);
	printf("50~59�����H��:%d\n",f);
	printf("60~69�����H��:%d\n",g);
	printf("70~79�����H��:%d\n",h);
	printf("80~89�����H��:%d\n",j);
	printf("90~99�����H��:%d\n",k);
	printf("100���H�W���H��:%d\n",l);
}

