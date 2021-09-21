#include<stdio.h> 
   
int main()    
{    
 int i,a;    
 printf("Enter the number of elements:");    
 scanf("%d",&a); 
for(i=1;i<=a*2;i++){
	if(i%2!=0)
		if(i<a*2-1)
		printf("%d,",i);
		else
		printf("%d",i);
}  
return 0;  
}  
