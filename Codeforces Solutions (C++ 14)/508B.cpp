//05-01-2019 - 06

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char number[100001];
    char ch;
    int i = -1, j;
    int temp, temp2, temp3 = -1;

    while(true)
    {
        scanf("%c", &ch);
        if(ch == '\n' || ch == '\0' || ch == ' ')
            break;
        else
        {
            i++;
            number[i] = ch;
        }
    }

    number[++i] = '\0';

    int lastDigit = number[i - 1] - 48;

    for(j = 0; j < i; j++)
    {
        temp = number[j] - 48;
        if(temp % 2 == 0)
        {
            temp3 = j;
            if(temp < lastDigit)
            {
                temp2 = lastDigit;
                number[i - 1] = temp + 48;
                number[j] = temp2 + 48;
                break;
            }
        }
    }

    if(j == i && temp3 == -1)
        cout<<-1;

    else if(j == i && temp3 != -1)
    {
        temp = number[temp3] - 48;
        temp2 = lastDigit;
        number[i - 1] = temp + 48;
        number[temp3] = temp2 + 48;
        for(int k = 0; k < i; k++)
            cout<<number[k];
    }
    else
    {
        for(int k = 0; k < i; k++)
            cout<<number[k];
    }
}