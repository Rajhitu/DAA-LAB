#include <bits/stdc++.h>
#include <string.h>
using namespace std;
// c8s2d3
void lora(string str)
{
    string c;
    int k = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] > '0' && str[i] <= '9')
        {
            int temp = str[i] - '0';//important thing 
            
            while (temp > 0)
            {

                c.push_back( str[i - 1]);

               
                temp--;
            }
        }
    }
    // strcpy(res,c);

    // cout << "k----> " << k;
// for (int i = 0; i < c.size(); i++)
// {
//     cout<<c[i];
// }

   cout<<c;
}
int main()
{
    string str, res;
    cin >> str;

    lora(str);

    // for (int i = 0; i < str.size(); i++)
    // {
    //     cout << str[i];
    // }
    // cout << "\n";

    // string lora="jitiesfd";
    // cout<<strlen(lora);

    return 0;
}