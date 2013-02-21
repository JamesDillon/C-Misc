#include <stdio.h> 

void bubble_sort(int numbers[], int elements);

int main(int argc, char *argv[]) 
{
   //Test array filled with numbers in no apparent order.
   int numbers[] = { 4, 5, 3, 1, 6, 8, 23, 53, 2, 5 };
   int number_of_elements = 10; 
   int i;

   bubble_sort(numbers, number_of_elements);

   //A for loop printing out all the elements of the array.
   for (i = 0; i <= 10; i++)
   { 
      printf("%d\t", numbers[i]);
   }

   return 0;
}

void bubble_sort(int numbers[], int elements)
{ 
   int k;

   for (elements; elements > 0; elements--)
   {
      for (k = 1; k <= elements; k++)
      {
         if (numbers[k - 1] > numbers[k])
         {
            numbers[k - 1] ^= numbers[k];
            numbers[k] ^= numbers[k - 1];
            numbers[k - 1] ^= numbers[k];
         }
      }
   }
}
