#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp=35;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=sp;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf(" *");
		}
		printf("\n");
		sp--;
	}
	getch();

}