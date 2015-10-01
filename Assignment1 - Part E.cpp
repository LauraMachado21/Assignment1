#include <stdio.h>
#include <math.h>

int main()
{
   int array[5];
   int i;
   float sum=0;
   float average;
   float sub_average;
   float sum2=0;
   float div_square;
   float squareroot_value;
   
   
   printf("Please input 5 numbers: ");
   
   for(i=0;i<5;i++){
       scanf("%d",&array[i]);
   }
   
   
   for(i=0;i<5;i++){
       sum=sum+array[i];
   }
   
   average=sum/5; // i)Calculate average.
   
   for(i=0;i<5;i++){
       
       sub_average=array[i]-average;
       sum2=sum2+(sub_average*sub_average); // ii and iii) Calculate the sum of the differences and sum up the results.
   }
   
   div_square=sum2/5; //iv) Divide the square of the differences by 5.
   squareroot_value=sqrt(div_square); // v) Compute the square root.
   
   printf("The standard deviation of the inputted numbers is: %f\n\n",squareroot_value); // vi) print the result.
     
  
 return 0;   
}

