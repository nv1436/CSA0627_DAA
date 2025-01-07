
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],i,n,max,min;
	printf("enter size of an array");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=1;i<n;i++){
		if(min>a[i])
		min=a[i];
		if(max<a[i])
		max=a[i];
	}
	printf("minimum is %d\n",min);
	printf("maximum is %d\n",max);
}
