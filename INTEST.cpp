# include <bits/stdc++.h>

using namespace std;

int main()
{
    long int i , n , k , c = 0;

    cin >> n >> k;
    long int t[n];
    for(i =0 ; i < n ; i++)
    {
       cin >> t[i];
    }
    for(i =0 ; i < n ; i++)
    {
       if(t[i] % k == 0)
       {
           c = c +1;
       }
    }
    cout << c << endl;

}
