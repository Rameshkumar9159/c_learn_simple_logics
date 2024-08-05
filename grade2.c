#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5;
	float percent;
	printf("Enter the marks obtained in 5 subject out of 100:");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	percent=((float)(s1+s2+s3+s4+s5)/500)*100;
	if(percent>=80)
	{
		printf("grade A\npercent is %f\n",percent);
	}
	else if(percent<80 && percent>=70)
	{
		printf("grade B\npercent is %f\n",percent);
	}
	else if(percent<70 && percent>=60)
	{
		printf("grade C\npercent is %f\n",percent);
	}
	else if(percent<60 && percent>=40)
	{
		printf("grade D\npercent is %f\n",percent);
	}
	else
	{
		printf("Your percent is less than 40 so you got fail");
	}
	return 0;
}

