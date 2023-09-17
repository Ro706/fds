#include<stdio.h>
int main(){
    int a[]={0,2,1,2,1,0};
    int n = sizeof(a)/sizeof(a[0]);
    int n0 =0,n1=0,n2=0;
    for(int i = 0;i<n;i++){
        if (a[i] == 0)n0++;
        else if (a[i]==1)n1++;
        else n2++;
        printf("%d %d %d\n",n0,n1,n2);
    }
    int i=0;
    while (n0--)a[i++]=0; //n0 =2
    while (n1--)a[i++]=1; //n1 =2
    while (n2--)a[i++]=2; //n2 =2
    for(int i =0;i<n;i++){
        printf("%d ",a[i]);
    }
}
