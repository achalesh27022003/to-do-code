// Input:
1331
// Output:
"It's Palindrome number"

#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int digit;
    int r = 0;
    while(n != 0)
    {
        digit = n%10;
        r = r*10 + digit;
        n = n/10;
    }
    return r;
}

int main()
{
    int n;
    cin>>n;
    int n_rev;
    n_rev = reverse(n);
    if(n_rev == n)
    {
        cout<<"It's Palindrome number"<<endl;
    }
    else
    {
        cout<<"It's not a Palindrome number"<<endl;
    }
    
}
