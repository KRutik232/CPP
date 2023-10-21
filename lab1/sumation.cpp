#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, sum;
	int* ptr;
	printf("enter the numer of elements\n");
	scanf("%d", &n);
	ptr=(int*)malloc (n*sizeof(int));
	printf("Accept elements of the array");
	for(i=0;i<n;i++)
	scanf("%d",(ptr+i));
	for (i=0;i<n;i++)
	sun=sum+*(ptr+i);
	printf("summation = %d\n",sum);
	free(ptr);
	
	
}

