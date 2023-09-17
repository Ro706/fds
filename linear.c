#include<stdio.h>
int linearSearch(int *A, int n, int val)
{
	int i;
    for ( i=0; i<n; i++) 
	if(A[i]==val) 
	{
		return i;		
	}
    return -1;
}
int main()
{
	int m,n,val=2,i;
	printf("enter the size of array: ");
	scanf("%d",&m);
	int A[m];
	n = sizeof(A) / sizeof(A[0]);	
	printf("enter elements of array: ");
	for( i=0;i<m;i++)
	{
		scanf("%d",&A[i]);
	}
	
	int r=linearSearch(*A,n,val);
	if(r==-1)
	{
		printf("element not found");
	}
	else
	printf("Element found at index: %d", r);

    return 0;
}