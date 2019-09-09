# include <bits/stdc++.h>

using namespace std;
int fac(int x)
{
    int a = 1 , i;
    for(i = x ; i >0 ; i--)
    {
        a = a*i;
    }
    return a;
}
int main()
{
    int t , i;
    cin >> t;
    int n[t];
    for (i = 0 ; i < t ; i++)
    {
        cin >> n[i];
    }
    for (i = 0 ; i < t ; i++)
    {
        cout << fac(n[i]) << endl;
    }
}
