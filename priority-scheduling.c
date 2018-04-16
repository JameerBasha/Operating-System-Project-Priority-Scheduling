#include<stdio.h> 
int main()
{
	printf("\n****Priority Calculator****\n");
	unsigned int num,i,choice,errorflag=0;
	printf("Enter the Number of Processes: ");
	scanf("%d",&num);
	if(num>100||num<1)
	{
		printf("\nWrong input Enter the correct input again");
		errorflag=1;
		main();
	}
	unsigned int recent[num],base=60,priority[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the Recent CPU Usage of process %d : ",i+1);
		scanf("%d",&recent[i]);
		if(recent[i]>1000||recent[i]<0)
		{
			printf("\nWrong input Enter the correct input again");
			errorflag=1;
			break;
		}
	}
	if(errorflag==1)
	{
		main();
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
	printf("\nEnter 1 to calculate again or anything else to exit:");
	scanf("%d",&choice);
	if(choice==1)
	main();
}
