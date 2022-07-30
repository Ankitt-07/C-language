#include<stdio.h>
int main(void){
   int start[] = {1, 3, 0, 5, 8, 5};
   int finish[] = {2, 4, 6, 7, 9, 9};
   int activities = sizeof(start)/sizeof(start[0]);
   int i, j;
   printf ("Following activities are selected :-");
   i = 0;
   printf("%d\t", i);
   for (j = 1; j < activities; j++){
      if (start[j] >= finish[i]){
         printf(" %d ", j);
         i = j;
      }
   }
   return 0;
}
