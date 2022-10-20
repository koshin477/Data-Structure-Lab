#include <iostream>
using namespace std;
int main()
{
    int a[7] = { 1, 2, 3, 4, 5, 6,7};
    int i, x, low, high , mid;
    for(int i=0; i<7; i++){
    if (low>high)
        return false;

    else
        mid = (low+ high)/ 2;

        if (x == a[mid])
        return mid;

        else if (x >a[mid])
            low = mid + 1;
        else
            (high = mid - 1);
             }
}
