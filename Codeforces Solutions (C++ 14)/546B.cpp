#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int cfactor[n];
    for(int i = 0; i < n; i++)
        cin>>cfactor[i];

    sort(cfactor, cfactor + n);

    int i = 0;
    int ctr = 0;

    while(i < n-1)
    {
        if(cfactor[i] == cfactor[i+1])
        {
            cfactor[i+1]++;
            ctr++;
        }
        else if(cfactor[i+1] < cfactor[i])
        {
            ctr += cfactor[i] - cfactor[i+1] + 1;
            cfactor[i+1] = cfactor[i] + 1;
        }
        i++;
    }

    cout<<ctr;
}