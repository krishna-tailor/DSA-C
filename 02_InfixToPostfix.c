/*
    Program To conevert infix expression to postfix
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int top = -1, j = 0;
char stack[100], infix[100], postfix[100];

void push(char ch)
{
    top++;
    stack[top] = ch;
}

char pop()
{
    char ch;
    ch = stack[top];
    top--;
    return ch;
}

int main()
{
    system("clear");
    char ch;
    printf("Enter Expression: ");
    scanf("%[^\n]s", infix);

    for (int i = 0; infix[i] != '\0'; i++)
    {
        ch = infix[i];

        switch (ch)
        {
        case '(':
            push(ch);
            break;

        case '^':
            push(ch);
            break;

        // Checks High Priority Operator On The Top Of Stack
        case '+':
        case '-':
            if (stack[top] == '^' || stack[top] == '*' || stack[top] == '/')
            {
                while (stack[top] == '^' || stack[top] == '*' || stack[top] == '/')
                {
                    postfix[j] = pop();
                    j++;
                }
            }
            else
            {
               push(ch);
            }
            break;

        // Checks High Priority Operator On The Top Of Stack
        case '*':
        case '/':
            if (stack[top] == '^')
            {
                while (stack[top] == '^')
                {
                    postfix[j] = pop();
                    j++;
                }
            }
            else
            {
                push(ch);
            }
            break;

            // Checks High Priority Operator On The Top Of Stack
        case ')':
            while (stack[top] != '(')
            {
                postfix[j] = pop();
                j++;
            }
            top--;
            break;

        case ' ':
            continue;
            break;

        default:
            postfix[j] = ch;
            j++;
            break;
        }
        printf("%s %s\n",stack,postfix);
    }
    printf("\n");

    for (int i = top; i >= 0; i--)
    {
        ch = pop();
        if (ch != '(')
        {
            postfix[j] = ch;
        }
        j++;
    }

    // Printing String Tp Revserse
    for (int i = 0; i <=postfix[i]!='\0'; i++)
    {
        if (postfix[i] != '(')
            printf("%c", postfix[i]);
    }
    printf("\n");
}