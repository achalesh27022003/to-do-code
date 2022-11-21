#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {8,9,0,-1,5,7};
    //sort(a,a+6); ascending order
    //sort(a,a+6,greater<int>());descending order
    sort(a+2,a+6,greater<int>()); // particular range descending order
    for(int i = 0; i < 6; i++)
    {
        cout<<a[i]<<" ";
    }
}
