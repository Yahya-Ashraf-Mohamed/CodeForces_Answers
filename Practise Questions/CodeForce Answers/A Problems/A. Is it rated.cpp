// {CF807-D2-A} http://codeforces.com/contest/807/problem/A

#include <iostream>
using namespace std;
#include <stack>

int main()
{
    stack<long> StackList;
    int NumRounds, Rank;
    cin >> NumRounds;

    bool flage = false;
    cin >> Rank;
    int lastValue = Rank;
    StackList.push(Rank);
    for (int i = 1; i < NumRounds*2; i++)
    {
        cin >> Rank;
        if (!(StackList.empty()) && StackList.size()%2 != 0)
        {
            if (Rank == StackList.top())
            {
                if (lastValue < Rank)
                    flage = true;
                lastValue = StackList.top();
                StackList.pop();
            }
            else
                StackList.push(Rank);
        }
        else
            StackList.push(Rank);
        
    }

    if (StackList.empty())
        cout << (flage == true ? "unrated\n" : "maybe\n");
    else
        cout << "rated\n";
    return 0;
}