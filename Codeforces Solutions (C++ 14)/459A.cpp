//04-01-2019

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    int dist;

    cin>>x1>>y1>>x2>>y2;
    dist = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    if(x1 == x2)
        cout<<x1 + dist<<" "<<y1<<" "<<x2 + dist<<" "<<y2;

    else if(y1 == y2)
        cout<<x1<<" "<<y1 + dist<<" "<<x2<<" "<<y2 + dist;

    else
    {
        if(abs(x1 - x2) != abs(y1 - y2))
        {
            cout<<-1;
            exit(0);
        }

        if(x1 < x2)
            cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2;
        else
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;

    }

}