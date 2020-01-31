#include <bits/stdc++.h>
#include <stack>
using namespace std;

void showstack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "The stack is: ";
    showstack(s);

    cout << "s.size(): " << s.size() << endl;
    cout << "s.top(): " << s.top() << endl;
    cout << "s.pop(): ";
    s.pop();
    showstack(s);
}

//notes:
//if we don't passing by reference in the function the stack itself won't pop outside the function