#include <iostream>
using namespace std;
int main()
{
    int arr1[5] = { 40 ,50, 60, 70, 80};
    int arr2[8] = { 1, 2, 3, 4, 5, 6, 7, 8};

    int arr3[13];
    int i=0;
    for ( i=0; i<5 ; i++)
    {
        arr3[i]=arr1[i];
    }

    for (int j=0; j<8 ; j++)
    {
        arr3[i]=arr2[j];
        i++;
    }
    for (int j=12; j>0 ; j--)
    {
       cout<< arr3 [j]<<endl;
    }
}

