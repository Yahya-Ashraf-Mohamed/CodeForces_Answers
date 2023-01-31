// {CF208-D2-A} http://codeforces.com/contest/208/problem/A

#include <string>
#include <iostream>
using namespace std;
#define max 200

int main()
{
    
    string Word;
    cin >> Word;

    char Sentence[max];


    for (int i = 0; i < Word.length(); i++)
    {
        if (Word.substr(i, 3) == "WUB")
        {
            i = i + 2;
            cout << " ";
        }
        else
            cout << Word[i];
    }               
    
    return 0;
}

