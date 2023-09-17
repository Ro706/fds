#include<stdio.h>
void printme(int a[],int n){
    printf("\n");
    for (int i = 0;i<n;i++){
        printf(" %d",a[i]);
    }
}
int main(){
    int a[]={10,5,4,7,9,2,12,6,3};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0;i<n;i++){//pass
        int j,val; //val temp value 
        val = a[i]; //val = 10;
        for(j = i-1;j>=0;j--){//j=0
            if(a[j]>val){
                a[j+1] = a[j];
                printf("\n %d  %d  %d\n",a[j+1],a[j],val);
            }else
                break;
        }
        a[j+1] =val;
        printf(" %d \n",a[j+1]);
        printme(a,n);
    }
    printme(a,n);
}