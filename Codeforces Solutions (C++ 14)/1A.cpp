#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a, row, col;
    cin>>n>>m>>a;

    row = n/a;
    if(n % a != 0)
        row++;

    col = m/a;
    if(m % a != 0)
        col++;

    cout<<row * col<<endl;
}