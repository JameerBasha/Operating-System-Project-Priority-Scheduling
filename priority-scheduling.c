#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>
int main()
{
	int num,i;
	printf("Enter the Number of Processes: ");
	scanf("%d",&num);
	int recent[num],base=60,priority[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the Recent CPU Usage of process %d : ",i+1);
		scanf("%d",&recent[i]);
	}
	for(i=0;i<num;i++)
	{
		priority[i]=((recent[i]/2)+base);
	}
	printf("\n\n\tProcess\tRecalculated Priority");
	for(i=0;i<num;i++)
	{
		printf("\n\t%d\t%d",i+1,priority[i]);
	}
}
