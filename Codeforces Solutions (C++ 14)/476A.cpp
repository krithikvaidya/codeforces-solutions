//03-01-2019
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    if(m > n)
    {
        cout<<-1;
        exit(0);
    }

    int min_moves = (n % 2 == 0) ? (n/2) : (n/2 + 1);

    while(min_moves % m != 0)
        min_moves++;

    cout<<min_moves;
}