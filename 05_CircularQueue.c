#include <stdlib.h>
#include <stdio.h>

#define SIZE 5

int front = -1, rear = -1, queue[SIZE];

void enterElement()
{
    int value;
    if (rear == SIZE  - 1 && front == 0)
    {
        system("clear");
        printf("====> Queue Is Full <====\n");
    }

    else if (rear == front - 1)
    {
        system("clear");
        printf("====> Queue Is Full <====\n");
    }

    else if (front == -1 && rear == -1)
    {
        printf("Enter Value: ");
        scanf("%d", &value);

        rear++;
        front++;
        queue[rear] = value;
        system("clear");
        printf("====> %d Entered Successfully <====\n", value);
        
    }

    else if (rear == SIZE - 1 && front != 0)
    {
        printf("Enter Value: ");
        scanf("%d", &value);

        rear = 0;

        queue[rear] = value;

        system("clear");
        printf("====> %d Entered Successfully <====\n", value);
    }

    else
    {
        printf("Enter Value: ");
        scanf("%d", &value);

        rear++;
        queue[rear] = value;

        system("clear");
        printf("====> %d Entered Successfully <====\n", value);
        
    }
}

void deleteElement()
{
    if (front == -1 && rear == -1)
    {
        system("clear");
        printf("====> Queue Is Already Empty <====\n");
    }

    else if (front == rear)
    {
        system("clear");
        printf("====> %d Deleted Successfully and now queue is empty <====\n", queue[front]);
        front = rear = -1;
    }

    else if(rear >=0 && front == SIZE )
    {
        system("clear");
        front = 0;
        printf("====> %d Deleted Successfully <====\n",queue[front]);
    }

    else
    {
        system("clear");
        printf("====> %d Deleted Successfully <====\n", queue[front++]);
    }
}

void display()
{

    if(front == -1 && rear == -1)
    {
        system("clear");
        printf("====> Queue Is Empty No Elements Present <====\n");
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    system("clear");

    int choice;

    do
    {
        printf("\n/////////////////////////////////////\n");
        printf("**** Circular Queue Operations ****\n");

        printf("1. Enter Element \n2. Delete Element \n3. Display Elements \n4. Exit...\n");
        printf("\n_____________\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("clear");
            enterElement();
            break;

        case 2:
            system("clear");
            deleteElement();
            break;

        case 3:
            system("clear");
            display();
            break;

        default:
            system("clear");
            printf("====> Invalid Choice <====\n");
            break;
        }
    } while (choice != 4);
}