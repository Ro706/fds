#include<stdio.h>

int main(){
 int a1[5]={1,3,5,7,9},a2[5]={2,4,6,8,10},c[10];
 int i=0 ,j=0,k=0;
 while (i <5 && j<5){
	if (a1[i]<= a2[j])
		c[k++] = a1[i++];
        else
 		c[k++]=a2[j++];
}
while(i<5)
	c[k++]= a1[i++];
while(j<5)
 	c[k++]=a2[j++];
for (int i =0;i<k;i++)
	printf("%d ",c[i]);
return 0;
}

