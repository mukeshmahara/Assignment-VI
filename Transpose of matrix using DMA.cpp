#include<stdio.h> 
#include<stdlib.h> 
int main() { 
int **a; 
int ar,ac; 
int i,j; 
printf("\nEnter rows and columns for matrix :"); 
scanf("%d%d",&ar,&ac); 
/* allocate memory for matrix */ 
a=(int **) malloc(sizeof(int *)*ar); 
for( i=0;i<ar;i++) {
a[i]=(int *) malloc(sizeof(int*)*ac); 
} 
// matrix input 
printf("\n enter matrix one %d by %d\n",ar,ac); 
for (i=0;i<ar;i++) 	
{ 
for(j=0;j<ac;j++) 
{ 
scanf("%d",&a[i][j]); 
} 
}
return 0;}
 		

