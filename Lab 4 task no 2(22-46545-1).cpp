#include <iostream>
using namespace std;
int main()
{
    int a[5] = { 10, 20, 3, 5, 6};
    int i, n;
    cout<<"Enter the number to be searched: "<<endl;
    cin>>n;
    for(int i=0; i<5; i++)
        {
    if (a[i]==n){
            cout<<n<<" was found in index "<<i<<" of the array."<<endl;
    break;
    }

}

}

