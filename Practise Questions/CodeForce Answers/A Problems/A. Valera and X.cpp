// {CF208-D2-A} http://codeforces.com/contest/208/problem/A

#include <string>
#include <iostream>
using namespace std;
#define max 300

int main()
{
    
    int N;
    cin >> N;

    bool status;
    string line[max];
    
    for (int i = 0; i < N; i++)
    {
        cin >> line[i];
    }
    
    bool is_X = true;
    char ch1 = line[0][0];
    char ch2 = line[0][1];

    if (ch1 == ch2)
    {
        cout << "NO";
        return 0;
    }


    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j || i + j == (N - 1))
            {
                if (line[i][j] != ch1)
                {
                    is_X = 0;
                    break;
                }
            }
            else
            {
                if (line[i][j] != ch2)
                {
                    is_X = 0;
                    break;
                }
            }
        }
    }



    if (is_X)
        cout << "YES";
    else
        cout << "NO";
    

    return 0;
}



