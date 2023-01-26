// {CF520-D2-A} http://codeforces.com/contest/520/problem/A

#include<iostream>
using namespace std;
#include<set>


int main()
{
    int len;
    cin >> len;
    string Word;
    set<char>Alphabets;
    cin >> Word;

    for (int i = 0; i < len; i++)
    {
        if (Word[i] >= 'A' && Word[i] <= 'Z') 
            Word[i] += 'a' - 'A';
        Alphabets.insert(Word[i]);
    }

    if (Alphabets.size() == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
