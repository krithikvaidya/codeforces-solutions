#include <bits/stdc++.h>

typedef unsigned char BYTE;

using namespace std;

int main()
{
    bool isColour = false;
    char colour, wSpace;

    int n, m;
    cin>>n>>m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>colour;

            if(!isColour && (colour != 'W' && colour != 'B' && colour != 'G'))
                isColour = true;
        }

    }

    if(isColour)
        cout<<"#Color";
    else
        cout<<"#Black&White";
}