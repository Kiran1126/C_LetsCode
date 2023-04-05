#include<stdio.h>
int main()
{
	int n,y,m,w,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11;
	printf("Enter the number of days :");
	scanf("%d",&n);
	if(n>=365)
	{
		y=n/365;
		r1=n%365;
		printf("%d years ",y);
		if(r1>=30)
		{
			r2=r1/30;
			r3=r1%30;
			printf("%d months ",r2);
			if(r3>=7)
			{
				r4=r3/7;
				r5=r3%7;
				printf("%d weeks %d days",r4,r5);
			}
			else
				printf("%d days",r3);
		}
		else if(r1>=7)
		{
			r10=r1/7;
			r11=r1%7;
			printf("%d weeks %d days",r10,r11);
		}
		else
			printf("%d days",r1);
	}
	else if(n<365 && n>=30)
	{
		m=n/30;
		r6=n%30;
		printf("%d months ",m);
		if(r6>=7)
		{
			r7=r6/7;
			r8=r6%7;
			printf("%d weeks %d days",r7,r8);
		}
		else
			printf("%d days",r6);
	}
	else if(n<30 && n>=7)
	{
		w=n/7;
		r9=n%7;
		printf("%d weeks %d days",w,r9);
	}
	else if(n<7)
	{
		printf("%d days",n);
	}
	return 0;
}
