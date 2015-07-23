#include <stdio.h>
#include <stdlib.h>
void swap(int *x,int *y)
{

   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}
 
int choose_pivot(int i,int j )
{
   return((i+j) /2);
}

 
void quicksort(int list[],int m,int n)

{
   int key,i,j,k;

   if( m < n)

   {

      k = choose_pivot(m,n);

      swap(&list[m],&list[k]);

      key = list[m];

      i = m+1;

      j = n;
      while(i <= j)

      {

         while((i <= n) && (list[i] <= key))

                i++;
         while((j >= m) && (list[j] > key))
                j--;
         if( i < j)

                swap(&list[i],&list[j]);
      }

     // swap two elements

      swap(&list[m],&list[j]);

      // recursively sort the lesser list

      quicksort(list,m,j-1);

      quicksort(list,j+1,n);
   }
}

void printlist(int list[],int n)

{

   int i;

   for(i=0;i<n;i++)
      printf("%d\t",list[i]);

}

 

void main()

{

   const int MAX_ELEMENTS = 10;
   int list[MAX_ELEMENTS];

 

   int i = 0;

    

   // generate random numbers and fill them to the list
   for(i = 0; i < MAX_ELEMENTS; i++ ){

       list[i] = rand();

   }

   printf("The list before sorting is:\n");
   printlist(list,MAX_ELEMENTS);
   // sort the list using quicksort
   quicksort(list,0,MAX_ELEMENTS-1);
   // print the result
   printf("The list after sorting using quicksort algorithm:\n");
   printlist(list,MAX_ELEMENTS);

}
