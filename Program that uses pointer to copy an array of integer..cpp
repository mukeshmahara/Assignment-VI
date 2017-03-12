#include<stdio.h>
#include<conio.h>
int main()  
{
	int n;
	int i;
	printf("\nEnter the number of element in the array:") ;
	scanf("%d",&n);
	int *p,a1[n];
	p=&a1[n];
	printf("Enter %d element:",n);
	for(int i=0;i<n;i++){
		scanf("%d",&a1[i]);
			
	} 
	printf("\nThe element of the array are:");
	for(i=0;i<n;i++){
	
		printf("\na1[%d]%d\t",i,*(a1+i));
	}
	printf("\n\nthe copied array is:\n");
	for(i=0;i<n;i++){
		printf("\na2[%d]=%d\t",i,*(a1+i));

	}
return 0;
}   

