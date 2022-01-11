#include<stdio.h>


int main(){

	int num;

    printf("enter your number");
    scanf("%d" , &num);

	if (num<0)
	{
		printf("negative");
	}
	else if (num>0)
	{
		printf("positive");
	}
	else if (num==0)
	{
		printf("0");
	}
	else 
	{
		printf("invalid number");
	}
    return 0;
}


