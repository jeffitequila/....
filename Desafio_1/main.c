#include <stdlib.h>
#include <stdio.h>

int mmc(int num1, int num2){
	int a,b,c,mmc;
	b=num1;
	a=num2;
	do{
		c=(a % b);
		a=b;
		b=c;
	}while(c!=0);
	mmc =(num1*num2)/a;
	return mmc;
}
int main (){
	int i,e,num1,obs[50];
		scanf("%d", & i);
		num1=1;
			for (e=0;e<i;++e){
				scanf("%d",& obs[e]);
				num1= mmc (obs[e],num1);
	}
	if (i!=0)
	printf("\n%d",num1);
	system("pause");
	return 0;
}
