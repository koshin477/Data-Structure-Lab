#include<bits/stdc++.h>
using namespace std;


void Array(int *a, int n){
    for(int i = 0; i<n; i++){

        cout<<a[i]<<" ";

    }
    cout<<endl;
}
    bubblesort(int *a, int n){
        int temp;
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-1-i; j++){
                    if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                }
            }
        }
    }




int main()
{
    int a[]= { 7, 8, 9, 2, 1, 3};
    int n = 6;

    Array(a,n);
    bubblesort(a,n);
    Array(a,n);


    return 0;

}
