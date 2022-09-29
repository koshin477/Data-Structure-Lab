#include <iostream>
using namespace std;


int main()
{
    int array1[10] = {1,2,3,4,1,6,7,1,2,3};
    int s = sizeof(array1)/sizeof(array1[0]);

    cout << "Inputted Array: ";

    for (int i=0; i < s; i++)
    cout << array1[i] <<" ";

    cout <<"\nUnique elements are: ";
    for (int i=0; i<s; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (array1[i] == array1[j])
               break;
         if (i == j)
          cout << array1[i] << " ";
    }
    return 0;
}
