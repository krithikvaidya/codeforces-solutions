//03-01-2019

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    short numbers[n];
    short rem;

    for(int i = 0; i < n; i++)
    {
        cin>>numbers[i];
    }

    if(numbers[1] % 2 == numbers[0] % 2)
        rem = numbers[0] % 2;

    else
    {
        if(numbers[2] % 2 == numbers[1] % 2)
            cout<<1;
        else
            cout<<2;

        return 0;
    }

    for(int i = 2; i < n; i++)
    {
        if(numbers[i] % 2 != rem)
        {
            cout<<i+1;
            return 0;
        }
    }

}