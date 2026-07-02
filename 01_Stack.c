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
<<<<<<< HEAD
        printf("**** Stack OverFlow ****\n");
        printf("//////////////////////////////////\n\n");
=======
        printf("**** Stack OverFlow ****\n\n");
>>>>>>> 7a4715fc4ce64c396ee99256fb26773f09a3eaad
    }

    else
    {
        printf("Enter Value To Enter => ");
        scanf("%d",&value);
        top++;
        stack[top] = value; // Pushing Element On The Top Of Stack
        system("clear");
        printf("**** %d Pushed Successfully ****\n",stack[top]);
<<<<<<< HEAD
        printf("//////////////////////////////////\n\n");
=======
>>>>>>> 7a4715fc4ce64c396ee99256fb26773f09a3eaad
    }
}

// Poping Element From The Top
void pop()
{
    if(top == -1)
    {
        system("clear");
<<<<<<< HEAD
        printf("**** Stack Underflow ****\n");
        printf("//////////////////////////////////\n\n");
    }

    else{
        printf("%d Element Is Deleted....\n",stack[top]);
        top--;
        printf("//////////////////////////////////\n\n");
=======
        printf("**** Stack Underflow ****\n\n");
    }

    else{
        printf("%d Element Is Deleted....\n\n",stack[top]);
        top--;
>>>>>>> 7a4715fc4ce64c396ee99256fb26773f09a3eaad
    }
}

void display()
{
<<<<<<< HEAD
    if(top == -1)
    {
        printf("**** No Stack Elements Present ****\n");
        printf("//////////////////////////////////\n\n");
        return;
    }
=======
>>>>>>> 7a4715fc4ce64c396ee99256fb26773f09a3eaad
    printf("**** Stack Elements ****\n\n");
    
    for (int i = 0; i <= top; i++)
    {
        printf("%d ",stack[i]);    
    }
<<<<<<< HEAD
    printf("\n");
    printf("//////////////////////////////////\n\n");
=======
    
>>>>>>> 7a4715fc4ce64c396ee99256fb26773f09a3eaad
}

int main()
{
<<<<<<< HEAD
    system("clear");
=======
    system("cls");
>>>>>>> 7a4715fc4ce64c396ee99256fb26773f09a3eaad
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
<<<<<<< HEAD
            printf("//////////////////////////////////\n\n");
=======
>>>>>>> 7a4715fc4ce64c396ee99256fb26773f09a3eaad
            break;
        }
    } while (choice!=4);
}