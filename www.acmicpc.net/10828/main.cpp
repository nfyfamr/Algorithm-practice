#include <cstdio>

class stack
{
private:
    int arr[10000];
    int sp;
    
public:
    stack() :sp(-1) {};
    ~stack() {};
    virtual void push(int n);
    virtual int pop();
    virtual int size() const;
    virtual bool empty() const;
    virtual int top() const;
};

void stack::push(int n)
{
    arr[++sp] = n;
    return;
}

int stack::pop()
{
    if (sp == -1)
    {
        return -1;
    }
    
    return arr[sp--];
}

int stack::size() const
{
    return sp + 1;
}

bool stack::empty() const
{
    return (sp == -1);
}

int stack::top() const
{
    if (sp == -1)
    {
        return -1;
    }
    
    return arr[sp];
}

int main(int argc, char** argv)
{
    int N;
    stack st;
    
    scanf("%d", &N);
    while (N-- > 0)
    {
        char command[6];
        int n;
        
        scanf("%s", command);
        switch (command[0] + command[1])
        {
            case 229:
                scanf("%d", &n);
                st.push(n);
                break;
            case 223:
                printf("%d\n", st.pop());
                break;
            case 220:
                printf("%d\n", st.size());
                break;
            case 210:
                printf("%d\n", st.empty());
                break;
            case 227:
                printf("%d\n", st.top());
                break;
        }
    }
    
    return 0;
}
