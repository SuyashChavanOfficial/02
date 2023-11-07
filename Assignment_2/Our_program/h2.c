#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>



void reversedArray(int a[50],int n)
{
	int i;

	printf("\nReversed Array is:\n");
	for(i=n-1;i>0;i--)
	{
		printf("%d\n",a[i]);
	}
}

int main(int argc,char *argv[])
{	
	int i,j=1,l;
	
	int n=argc-1;
	int a[n];
	char *args[n+1];
	
	printf("\nPid of the 2nd program is:%d\n",getpid());
	
	for(i=0;i<=n;i++,j++)
	{
		args[i]=argv[j];
	}
	args[i]=(char*)0;
	
	for(l=0,i=0;i<n;i++,l++)
	{
		a[l]=atoi(args[i]);
	}
	
	reversedArray(a,n);
}