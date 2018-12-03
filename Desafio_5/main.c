#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (){
	int n,z,d,e;
	char x,h[4];
			x=',';
				fgets(h,4,stdin);
	n=atoi(h);
	scanf("%d",&x);
	scanf("%d",&d);
	if (d != 0 and z!=0 and d<10 and z<10){
		for (e=1;e<=n;++e)
		{
			itoa(e,h,10);
				if (e==n)
					x='.';
				if (e % z == 0 or e % d == 0 or z == h[strlen(h)-1] -48 or d == h[strlen(h)-1] -48 )
					printf("Cafufa%c",x);
				if (e % z != 0 and e % d != 0 and z != h[strlen(h)-1] -48 and d != h[strlen(h)-1] -48 )
					printf("%d%c",e,x);

		}
	}
	system("pause");
	return 0;
}
