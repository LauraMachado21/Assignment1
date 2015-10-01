#include <stdio.h>

int main()
{
    int start = 1;
    int end = 1000;
    int n=3;

    while (start<=end){
        
        if(start%n==0){
        
        printf("%d ",start);
        }//endif
    
    start++;
    }//endwhile
    
 return 0;   
}

