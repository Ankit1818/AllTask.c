#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int mark[3], i;
	float sum=0;
	printf("Enter marks obtained in Physics, Chemistry, Maths:");
	for(i=0; i<3; i++)
	{
		scanf("%d",&mark[i]);
		sum=sum+mark[i];
	}
	float avg=sum/3;
	float perc;
	perc=(sum/300)*100;
	printf("Average Marks = %f",avg);
	printf("\nPercentage = %f%",perc);
	getch();
}