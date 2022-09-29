#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100], temp[100];
    int size, i, j, count;

    cout<<"Enter size of array:";
    cin>>size;

    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];

        temp[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {

            if(arr[i]==arr[j])
            {
                count++;

                temp[j] = 0;
            }
        }


        if(temp[i] != 0)
        {
            temp[i] = count;
        }
    }


    cout<<"\nFrequency of all elements of array :"<<endl;
    for(i=0; i<size; i++)
    {
        if(temp[i] != 0)
        {
            cout<<"occurs "<< arr[i]<<"\t"<<temp[i]<<" times"<<endl;
        }
    }

    return 0;
}
