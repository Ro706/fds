#include<stdio.h>
int main(){
	int a[5]={1,9,8,3,4};
	for (int i =1;i<5;i++){
		int flag = 0;
		for(int j=0;j<5-i;j++){
			if(a[j]>a[j+1]){
				int t = a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				flag =1;
			}
		}
	}
	for(int i =0;i<5;i++)
		printf("%d ",a[i]);
}

