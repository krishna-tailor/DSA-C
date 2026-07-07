/*
    Simple Stack Program inserting, poping and displaying elements
    Stack Uses LIFO Last In Frist Out
*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int stack[SIZE],top = -1; // Default Value Of Top Is -1

void push()
{
    int value;
    if(top == SIZE -1 )
    {
        system("clear");
        printf("**** Stack OverFlow ****\n\n");
    }

    else
    {
        printf("Enter Value To Enter => ");
        scanf("%d",&value);
        top++;
        stack[top] = value; // Pushing Element On The Top Of Stack
        system("clear");
        printf("**** %d Pushed Successfully ****\n",stack[top]);
        printf("//////////////////////////////////\n\n");
    }
}

// Poping Element From The Top
void pop()
{
    if(top == -1)
    {
        system("clear");
        printf("**** Stack Underflow ****\n");
        printf("//////////////////////////////////\n\n");
    }

    else{
        printf("%d Element Is Deleted....\n",stack[top]);
        top--;
        printf("//////////////////////////////////\n\n");
    }
}

void display()
{
    if(top == -1)
    {
        printf("**** No Stack Elements Present ****\n");
        printf("//////////////////////////////////\n\n");
        return;
    }
    printf("**** Stack Elements ****\n\n");
    
    for (int i = 0; i <= top; i++)
    {
        printf("%d ",stack[i]);    
    }
    printf("\n");
    printf("//////////////////////////////////\n\n");
}

int main()
{
    system("clear");
    int choice;

    do
    {
        printf("1. Push Element \n2. Pop Element \n3. Display Elements \n4. Exit...");
        printf("\n---------------------\n");
        printf("\nEnter Your Choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            system("clear");
            push();
            break;

        case 2:
            system("clear");
            pop();
            break;

        case 3:
            system("clear");
            display();
            break;
        
        case 4:
            system("clear");
            printf("Bye Bye...\n");
            break;
        
        default:
            system("clear");
            printf("**** Invalid Choice ****\n");
            printf("//////////////////////////////////\n\n");
            break;
        }
    } while (choice!=4);
}