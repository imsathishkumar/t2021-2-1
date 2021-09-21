#include<stdio.h> 
   
int main()    
{    
 int i,j,arr[100],result[]={0,0,0,0,0,0,0,0,0},size;    
 printf("Enter the size of array:");    
 scanf("%d",&size);
 printf("Enter the elements in array\n");
 for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
 for(i=0;i<size;i++){
 	for(j=1;j<10;j++){
 		if(arr[i]%j==0){
 			result[j-1]++;
		 }
	 }
 } 
 for(i=0;i<9;i++)
 	if(i<8)
 	printf("%d:%d,",i+1,result[i]); 
 	else
 	printf("%d:%d",i+1,result[i]);
 return 0;  
} 
