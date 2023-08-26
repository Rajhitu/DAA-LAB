#include <bits/stdc++.h>
using namespace std;
void isPalindrome(string s)
{
    int st = 0, ed = s.length() -1;

    while (st < ed)
    {

        if (!isalnum(s[st]))
        {
            st++;
        }
        else if (!isalnum(s[ed]))
        {

            ed--;
        }
        // "A man, a plan, a canal: Panama"

        if (tolower(s[st]) == tolower(s[ed]) &&(isalnum(s[st])||isalnum(s[ed])))
        {
            st++;
            ed--;
        }
        else
        {
            cout<<"false it is not\n";
            break;
        }
    }
  cout<<"true  it is is\n";
}

int main()
{
    string s;
   getline(cin,s);

     isPalindrome(s);
    return 0;
}