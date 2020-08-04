#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

int unsorted[6], counter, temp;
bool swapFlag = true;

/* 
  This  randomly generates 6 integers 
  Storing each in in an array called: unsorted
*/ 

for (counter=1; counter <= 6; counter = counter+1){
  srand(counter * counter);
  unsorted[counter] = rand() % 100 + 1;
  printf("%d\n", unsorted[counter]);
}

/* 
  Checks each element in unsorted[] against the next
  If unsorted[counter] > unsorted[counter+1]
  Move that number into temp.
  Move the next number to this position
  Move temp into next position, set swapFlag as true.
   
  The loop breaks when no more numbers are left to swap. 
  End result = Sorted array smallest to largest. 
  
  To change direction, change:
        If unsorted[counter] > unsorted[counter+1]
  to
        If unsorted[counter] < unsorted[counter+1]  
*/ 

while (swapFlag == true){
swapFlag = false;
for (counter=1; counter <= 6; counter = counter+1){
  if (unsorted[counter] > unsorted[counter + 1]){
    temp = unsorted[counter+1];
    unsorted[counter+1] = unsorted[counter];
    unsorted[counter] = temp;
    swapFlag=true;
    }
  }
}
printf("\n");
for (counter=1; counter <= 6; counter = counter+1){
        printf("%d\n", unsorted[counter]);
}
return 0;
}
