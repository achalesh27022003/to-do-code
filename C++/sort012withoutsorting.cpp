#include<bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    int c1 = 0, c2 = 0, c3;
    for(int i = 0; i<n; i++)
    {
        if(a[i] == 0)
        {
            c1++;
        }
        if(a[i] == 1)
        {
            c2++;
        }
    }
    c3 = n - (c1+c2);
    for(int i = 0; i < c1; i++)
    {
        a[i] = 0;
    }
    for(int i = c1; i < c1+c2; i++)
    {
        a[i] = 1;
    }
    for(int i = c1+c2; i < n; i++)
    {
        a[i] = 2;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n;i++)
    {
        cin>>a[i];
    }
    sort012(a,n);
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    int size = sizeof(a)/sizeof(a[0]);
    cout<<size;
    
}
