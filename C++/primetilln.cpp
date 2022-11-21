// Asked in Jio (Print prime till n)
// Input:
11
// Output:
2 3 5 7 11

#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    int i;
    if(n == 1 || n == 0)
    {
        return false;
    }
    i = 2;
    while(i < n)
    {
        if(n % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
     if(isprime(i))
     {
         cout<<i<<" ";
     }
    }
}
