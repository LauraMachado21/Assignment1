#include <stdio.h>

int main()
{
    int start=0;
    int end=100;
    int kilometers;
    float miles;
    float yards;
    
    printf("Kilometers  Miles   Yards\n");
    printf("-------------------------\n"); //print table title.

    
    while (start<=end){
        
        kilometers=start;
        miles=kilometers*0.62; //Convert to miles.
        yards=miles*1760; //Convert to yards.
        
        printf("%d\t%.2f\t%.2f\n",kilometers, miles, yards); //Print values in table.
        
    start+=5;
    }//endwhile
    
 return 0;   
}

