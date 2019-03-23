#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin>>n;

    int table[n][n];
    table[0][0] = table[0][1] = table[1][0] = table[0][2] = 1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == 0 || j == 0)
                table[i][j] = 1;
            else
                table[i][j] = table[i-1][j] + table[i][j-1];
        }
    }

    std::cout<<table[n-1][n-1];
}
