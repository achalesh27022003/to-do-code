// Reverse array using recursion
// Traverse array half way, two pointer we will run from first end and last end, and start swapping them until we reach i>= n/2 i.e. left and right end cross each other.

// Input:
5
1 2 3 4 5
// Output:
5 4 3 2 1
#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void reverse(int i,int a[], int n)
{
       if(i >= n/2) return ;
       swap(a[i], a[n-i-1]);
       reverse(i+1, a, n);
}

int main()
{
 int n,i;
 cin>>n;
 int a[n];
 for(i = 0; i < n;i++)
 {
     cin>>a[i];
 }
reverse(0,a,n);
for(i = 0; i < n;i++)
 {
     cout<<a[i]<<" ";
 }    
}
