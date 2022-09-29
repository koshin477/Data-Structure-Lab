#include <iostream>
using namespace std;

int main()
{
   int arr1[6] = {1,3,9,20,55,3},
   arr2[9] = {1,3,2,6,7,8,9,10,11},
    arr3[10], i, j, k, x, temp;
   for(i=0; i<10; i++)
      arr3[i]=arr1[i];

   for(i=0; i<10; i++)
      arr3[i]=arr2[j];
        i++;
   for(i=0; i<10; i++)
   {
      for(j=0; j<10; j++)
      {
         if(arr1[i]==arr2[j])
         {
            temp = 0;
            for(x=0; x<k; x++)
            {
               if(arr1[i]==arr3[x])
                  temp++;
            }
            if(temp==0)
            {
               arr3[k] = arr1[i];
               k++;
            }
         }
      }
   }

   cout<<"Common elements are:\n";
   for(i=0; i<k; i++)
      cout<<arr3[i]<<" ";


   return 0;
}
