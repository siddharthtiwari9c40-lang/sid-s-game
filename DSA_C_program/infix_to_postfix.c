#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    if(x == '^')
        return 3;
    return 0;
}

int main()
{
    char ch, x;

    printf("Enter infix expression: ");

    while((ch = getchar()) != '\n')
    {
        if(isalnum(ch))
        {
            printf("%c", ch);
        }
        else if(ch == '(')
        {
            push(ch);
        }
        else if(ch == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while(top != -1 && priority(stack[top]) >= priority(ch))
                printf("%c", pop());

            push(ch);
        }
    }

    while(top != -1)
        printf("%c", pop());

    return 0;
}