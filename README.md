# Codeforces problem


 Soluciones de Problemas de Codeforces En este documento se encuentran las soluciones a varios problemas de Codeforces:
  - [Problem B: diverse substrings](#problem-b-diverse-substrings) 
  - [Problem A: cheap travel](#problem-a-cheap-travel)
  - [Problem B: interesting drink](#problem-b-interesting-drink)
  - [Problem A: watermelon](#problem-a-watermelon)
  - [Problem A: way too long words](#problem-a-way-too-long-words)
 ---


# Problem B diverse substrings

**Link:** [Problem B: diverse substrings](https://codeforces.com/contest/1748/problem/B)
### Resolution:
``` c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long t;
    cin>>t;
    for (long long x = 0; x < t; x++)
    {
        long long n, valid;
        string s;
        cin>>n;
        cin >> s;
        valid = 0;
        for (long long i = 0; i < n; i++)
        {
            vector <long long>ncount(10,0);
            long long maxcount=0;
            long long howmanychar=0;
            for (long long j = i; j < min(i+100,n); j++)
            {
                if(ncount[s[j]-'0']==0){
                    howmanychar++;
                }
                ncount[s[j]-'0']++;
                maxcount = max(ncount[s[j]-'0'],maxcount);
                if(maxcount <= howmanychar){
                    valid++;
                }
            }
        }
        cout<<valid<<'\n';
    }
    
    return 0;
}
```
Day 20/04/2024 solved with RenzoSC


# Problem A cheap travel
**Link:** [Problem A: cheap travel](https://codeforces.com/problemset/problem/466/A)
### Resolution:
``` c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n, m, a, b;
    cin>>n>>m>>a>>b;
    if(b < m * a) {
        cout << (n / m) * b + min((n % m) * a, b) << '\n';
    }    
    else
    {
        cout << n * a << '\n';
    }
    return 0;
}
```
Day 20/04/2024 solved with RenzoSC

# 706B B. Interesting drink
**Link:** [Problem B: interesting drink](https://codeforces.com/problemset/problem/706/B)
### Resolution:
``` c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n, m, a, b;
    cin>>n>>m>>a>>b;
    if(b < m * a) {
        cout << (n / m) * b + min((n % m) * a, b) << '\n';
    }    
    else
    {
        cout << n * a << '\n';
    }
    return 0;
}
```
Day 20/04/2024 solved with RenzoSC

# 4A A. Watermelon
**Link:** [Problem A: watermelon](https://codeforces.com/problemset/problem/4/A)
### Resolution:
``` c++
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int w;
    cin>>w;
    if (w <=2) {
        cout<<"NO"<<"\n";
    }else
    if(w%2 == 0) {
        cout<<"YES"<<"\n";
    }else 
    {
        cout<<"NO"<<"\n";
    }
return 0;
}
```

# 71A A. Way Too Long Words
**Link:** [Problem A: way_too_long_words](https://codeforces.com/contest/71/problem/A)
### Resolution:

``` c++
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
```
