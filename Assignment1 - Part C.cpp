#include <stdio.h>

int main()
{
    int start=30;
    int sum=0;
    int end=50;
    int average;
    int even_values=0;
    
    while (start<=end){
        
        if(start%2==0){
            sum=sum+start;
            even_values++;
        }//endif
        
    start++;
    }
    
    average=sum/even_values;
    
    printf("The average of all even numbers in the range [30,50] is: %d",average);
    
 return 0;   
}

