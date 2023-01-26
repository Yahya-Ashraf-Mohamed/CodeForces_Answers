// {CF474-D2-A} http://codeforces.com/contest/474/problem/A

#include <iostream>
using namespace std;
#include <string>

int main()
{
    char shift;
    int index;
    string Keyboard, WrongString, CorrectString = "";

    cin >> shift >> WrongString;
    if (shift == 'R')
        index = -1;
    else
        index = 1;

    Keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    for (char i : WrongString)
        CorrectString += Keyboard[Keyboard.find(i) + index];

    cout << CorrectString;
    return 0;
}





















