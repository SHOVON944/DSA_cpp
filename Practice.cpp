#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isValid(string s)
{
    stack<char> st;
    for (char ch : s)
    {
        // brack open er jonno
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        // brack close
        else
        {
            if (st.empty())
                return false;
            char top = st.top();
            st.pop();
            if ((ch == ')' && top != '(') || (ch == '}' && top != '{') ||
                (ch == ']' && top != '['))
            {
                return false;
            }
        }
    }
    return st.empty(); // stack empty hole valid
}

int main()
{
    string s;
    cin >> s;
    if (isValid(s))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}  