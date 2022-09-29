#include <bits/stdc++.h>
using namespace std;

int countOccurrences(int arr[],int x, int N)
{
    int count = 0;
    for (int i=0; i < N; i++)
        if (arr[i] == x)
            count++;
    return count;
}

int main()
{
    int arr[] = { 1,3,2,1,1,2,3,6,6 };
    int x1 = 1;
    int x2 = 2;
    int x3 = 3;
    int x4 = 6;
    int N = sizeof(arr) / sizeof(arr[0]);

    cout <<x1 << " occurs "<< countOccurrences(arr, x1, N)<< " times"<<endl;
    cout <<x2 << " occurs "<< countOccurrences(arr, x2, N)<< " times"<<endl;
    cout <<x3 << " occurs "<< countOccurrences(arr, x3, N)<< " times"<<endl;
    cout <<x4 << " occurs "<< countOccurrences(arr, x4, N)<< " times";


    return 0;
}

