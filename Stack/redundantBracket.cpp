#include <iostream>
#include <stack>
using namespace std;
bool findRedundantBrackets(string &s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool isReduntant = true;
                while (st.top() != '(')
                {
                    char top = st.top();

                    if (top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isReduntant = false;
                    }

                    st.pop();
                }

                if (isReduntant == true)
                {
                    return true;
                }
                st.pop();
            }
        }
    }

    return false;
}

int main()
{

    string s = "(a*b+(c/d))";

    bool ans = findRedundantBrackets(s);

    if (ans)
    {
        cout << "Find reduntant " << endl;
    }
    else
    {
        cout << "Not redundant " << endl;
    }

    return 0;
}