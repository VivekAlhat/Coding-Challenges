#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    char *arr;
    int top, count = 0, size;

public:
    Stack(int size)
    {
        top = -1;
        arr = new char[size];
        this->size = size;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }

    bool isFull()
    {
        if (top == size - 1)
        {
            return true;
        }
        return false;
    }

    void push(int data)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            ++top;
            arr[top] = data;
            count++;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            char data = arr[top];
            arr[top] = 0;
            top--;
            count--;
            // cout << data << " removed from stack" << endl;
            // display();
        }
    }

    void display()
    {
        for (int i = 0; i < size; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    char peek()
    {
        return arr[top];
    }

    int getCount()
    {
        return count;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Stack st(s.size());
        int ans = 0;
        for (int i = 0; s[i] != '\0'; ++i)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                if (s[i] == ')')
                {
                    if (st.peek() == '(')
                    {
                        st.pop();
                    }
                    else
                    {
                        ans = 1;
                    }
                }
                else if (s[i] == ']')
                {
                    if (st.peek() == '[')
                    {
                        st.pop();
                    }
                    else
                    {
                        ans = 1;
                    }
                }
                else if (s[i] == '}')
                {
                    if (st.peek() == '{')
                    {
                        st.pop();
                    }
                    else
                    {
                        ans = 1;
                    }
                }
                else
                {
                    ans = 1;
                }
            }
        }
        if (ans == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}