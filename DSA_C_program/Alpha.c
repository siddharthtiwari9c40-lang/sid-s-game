#include <stdio.h>
#include <ctype.h>

#define Max 50

char opstack[Max];
int optop = -1;

int val_stack[Max];
int val_top = -1;

int isopstackempty()
{
    if (optop == -1)
        return 1;
    else
        return 0;
}

void pushoperator(char symbol)
{
    if (optop == Max - 1)
    {
        printf("Overflow");
        return;
    }
    else
    {
        optop++;
        opstack[optop] = symbol;
    }
}

char popoperator()
{
    char item;

    if (optop == -1)
    {
        printf("Underflow");
        return 0;
    }
    else
    {
        item = opstack[optop];
        optop--;
        return item;
    }
}

int applyoperator(int operand1, int operand2, char op)
{
    if (op == '+')
        return operand1 + operand2;
    else if (op == '-')
        return operand1 - operand2;
    else if (op == '*')
        return operand1 * operand2;
    else
        return operand1 / operand2;
}

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    else
        return 0;
}

void pushvalue(int item)
{
    if (val_top == Max - 1)
    {
        printf("Stack overflow");
        return;
    }
    else
    {
        val_top++;
        val_stack[val_top] = item;
    }
}

int popvalue()
{
    int item;
    if (val_top == -1)
    {
        printf("Stack underflow");
        return 0;
    }
    else
    {
        item = val_stack[val_top];
        val_top--;
        return item;
    }
}

void infixtopostfix(char infix[], char postfix[])
{
    int i = 0, k = 0;
    char symbol;

    while (infix[i] != '\0')
    {
        symbol = infix[i];

        if (isdigit(symbol))
        {
            postfix[k] = symbol;
            k++;
        }
        else if (symbol == '(')
        {
            pushoperator(symbol);
        }
        else if (symbol == ')')
        {
            while (!isopstackempty() && opstack[optop] != '(')
            {
                postfix[k] = popoperator();
                k++;
            }
            popoperator();
        }
        else
        {
            while (!isopstackempty() && precedence(opstack[optop]) >= precedence(symbol))
            {
                postfix[k] = popoperator();
                k++;
            }
            pushoperator(symbol);
        }

        i++;
    }

    while (!isopstackempty())
    {
        postfix[k] = popoperator();
        k++;
    }

    postfix[k] = '\0';
}

int evaluatepostfix(char postfixexp[])
{
    int i = 0;
    char symbol;
    int operand1, operand2, result;

    while (postfixexp[i] != '\0')
    {
        symbol = postfixexp[i];

        if (isdigit(symbol))
        {
            pushvalue(symbol - '0');
        }
        else
        {
            operand2 = popvalue();
            operand1 = popvalue();

            result = applyoperator(operand1, operand2, symbol);
            pushvalue(result);
        }

        i++;
    }

    return popvalue();
}

int main()
{
    char infixexp[Max], postfixexp[Max];

    printf("Enter the expression: ");
    scanf("%s", infixexp);

    infixtopostfix(infixexp, postfixexp);

    printf("Its postfix expression is: %s\n", postfixexp);
    printf("Result is %d", evaluatepostfix(postfixexp));

    return 0;
}