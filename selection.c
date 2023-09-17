#include<stdio.h>
int selectionsort(int *a,int n){
    for(int i =0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min])min=j;
        }
        if(min != i){
            int temp = a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}
void main(void){
    int a[]={10,5,4,7,9,2,12,6,3};
    int n = sizeof(a)/sizeof(a[0]);
    selectionsort(a,n);
    for(int i =0;i<n;i++){
        printf("%d ",a[i]);
    }
}
