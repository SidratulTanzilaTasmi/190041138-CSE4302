#include <bits/stdc++.h>
using namespace std;
const int MAX =100;
template <class Type>
class my_stack
{
private:
    Type arr[MAX];
    int top;

public:
    my_stack()
    {
        top=-1;
    }
    void push(Type num)
    {
        top++;
        arr[top] =num;
    }
    Type pop()
    {
        Type temp;
        temp=arr[top];
        arr[top--]=-999;
        return temp;

    }
    Type peek()
    {
        return arr[0];
    }
};
int main()
{
    my_stack<int> s1;
    my_stack<my_stack<int>>ss1;
    s1.push(100);
    s1.push(200);
    s1.push(300);
    cout << "First element inserted: " << s1.peek() << endl;
    cout << "Elements in the stack: " << endl;
    cout << "1. " << s1.pop() << endl;
    cout << "2. " << s1.pop() << endl;
    cout << "3. " << s1.pop() << endl;
    my_stack<float>s2;
    s2.push(100.01);
    s2.push(200.02);
    s2.push(300).03;
    cout << "First element inserted: " << s2.peek() << endl;
    cout << "Elements in the stack: " << endl;
    cout << "1. " << s2.pop() << endl;
    cout << "2. " << s2.pop() << endl;
    cout << "3. " << s2.pop() << endl;
    return 0;
}
