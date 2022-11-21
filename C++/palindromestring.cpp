// Same login as reversing an array, now we are checking that voh left end se aur right end se vale equal hai ya nahi, aur ek baar cross kr gye n/2 ko toh palindrome hai, vrna nhi.

// Input:
madam
//Output:
It's Palindrome

#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int i, string s, int n)
{
    if(i >= n/2) return true;
    if(s[i] != s[n-i-1])
    {
        return false;
    }
    return isPalindrome(i+1,s,n);
}
int main()
{
    string s;
    cin>>s;
    if(isPalindrome(0,s,s.size()))
    {
        cout<<"It's Palindrome";
    }
    else{
        cout<<"It's Not a Palindrome";
    }
    
}
