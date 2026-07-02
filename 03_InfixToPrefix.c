#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char infix[100], prefix[100], stack[100];
int top = -1, j = 0;

char pop()
{
    char ch;
    ch = stack[top];
    top--;
    return ch;
}

void push(char ch)
{
    top++;
    stack[top] = ch;
}

void reverse(char string[100])
{
    char temp;
    int j = strlen(string) - 1;

    for (int i = 0; i < strlen(string) / 2; i++)
    {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
        j--;
    }
}

int main()
{
    system("clear");
    char ch;

    printf("Enter The Infix Expression: ");
    scanf("%[^\n]s", infix);

    reverse(infix);
    printf("Stack    Prefix\n");
    for (int i = 0; infix[i] != '\0'; i++)
    {
        ch = infix[i];

        switch (ch)
        {
        case '+':
        case '-':
            if (stack[top] == '^' || stack[top] == '*' || stack[top] == '/')
            {
                while (stack[top] == '^' || stack[top] == '*' || stack[top] == '/')
                {
                    prefix[j++] = pop();
                }
            }


            else
            {
                push(ch);
            }
            break;

        case '*':
        case '/':
            if (stack[top] == '^')
            {
                while (stack[top] == '^')
                {
                    prefix[j++] = pop();
                }
            }

            else
            {
                push(ch);
            }
            break;

        case '^':
            push(ch);
            break;

        case ')':
            push(ch);
            break;

        case '(':
            while (stack[top] != ')')
            {
                prefix[j++] = pop();
            }
            top--;
            break;

            default:
                prefix[j++] = ch;
            break;
        }
        printf("%4s %s\n",stack,prefix);
        
    }



    for (int i = top; i >= 0; i--)
    {
        ch = pop();
        if(ch != ')')
            prefix[j++] = ch;
    }

    reverse(prefix);
    printf("%s",prefix);
    
}