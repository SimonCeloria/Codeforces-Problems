#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int words;
    cin>>words;
    while(words--){
    cin>>s;
    int sizeofword = s.size();
        if (sizeofword <= 10 && sizeofword >= 1) 
        {
            cout << s << endl;
        }else
        {
            int wordlong = sizeofword-2;
            string wordlong_str = to_string(wordlong);
            char first = s[0];
            char last = s[sizeofword - 1];
            string ans = first + wordlong_str + last; 
            cout << ans << endl;
        }
    }
return 0;
}