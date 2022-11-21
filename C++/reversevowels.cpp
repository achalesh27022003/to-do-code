// Asked In Jio
// C++ program to reverse order of vowels
#include<bits/stdc++.h>
using namespace std;

// utility function to check for vowel
bool isVowel(char c)
{
	if (c=='a' || c=='A' || c=='e' ||
			c=='E' || c=='i' || c=='I' ||
			c=='o' || c=='O' || c=='u' ||
			c=='U')
			{
			    return true;
			}
	else
	{
	    return false;
	}
}

// Function to reverse order of vowels
string reverseVowel(string str)
{
	int j=0;
	// Storing the vowels separately in vowels array
	string vowel;
	for (int i=0; i < str.size(); i++)
		if (isVowel(str[i]))
		{	vowel[j] = str[i];
			j += 1;
        }
	// Placing the vowels in the reverse
	// order in the string
	for (int i=0; i < str.size(); i++)
		if (isVowel(str[i]))
		{    j -= 1;
			str[i] = vowel[j] ;
        }
	return str;
}

// Driver function
int main()
{
	string str = "achalesh";
	cout<< str.length() <<endl;
	cout << reverseVowel(str);
	return 0;
}

// Input:
achalesh
//Output:
8
echalash
