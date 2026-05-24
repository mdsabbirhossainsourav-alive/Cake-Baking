#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,m;
    cin >> n >> m;
    int happy_customers = m-n;  
    if(happy_customers > n) 
    {  
        happy_customers = n;
    }
    cout << happy_customers << endl;
    return 0;
}