//A program that uses pointers to copy an array of double.
#include<stdio.h>
#include<conio.h>
int main ()
{
	double a[20],*b[20];
	int i,m;
	printf("enter the number of element in the array:");
	scanf("%d",&m);
	for(i<m;i=0;i++){
		printf("enter the element[%d]",i);
		scanf("%lf",&a[i]);
              }
printf("\n before copying array:\n");
for(i=0;i<m;i++){
	printf("a[%d]=%lf\n",i,a[i]);
}
for(i=0;i<m;i++){
		b[i]=&a[i];
	}
	printf("\n\nAfter copying array:\n");
	for(i=0;i<m;i++){
		printf("b[%d]=%lf\n",i,*b[i]);
	}
		return 0;
}

