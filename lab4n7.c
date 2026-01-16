#include <stdio.h>

int main(void)
{
    int i, j,k,a;  
	char b;
    scanf("%c %d %d",&b,&i,&j);
    
    for(k=1;k<=j;k++){
    	
    	for(a=1;a<=i;a++)
    	printf("%c",b);
    	printf("\n");
    	
    	
	}
    return 0;
}

