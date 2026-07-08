#include <stdlib.h>
#include <stdio.h>

#define SIZE 5

int front = -1, rear = -1, queue[SIZE];

void enterElement()
{
    int value;

    if ((rear + 1) % SIZE == front)
    {
        system("clear");
        printf("==== Queue Is OverFlow ====\n");
        return;
    }

    if (front == -1)
        front = rear = 0;

    else
        rear = (rear + 1) % SIZE;

    printf("Enter Value: ");
    scanf("%d", &value);

    queue[rear] = value;
    system("clear");
    printf("==== %d Inserted Sucessfully ====\n", value);
}

void deleteElement()
{
    if (front == -1)
    {
        system("clear");
        printf("==== Queue Is Underflow ====\n");
        return;
    }

    printf("==== %d Deleted Sucessfully ====\n", queue[front]);

    if (front == rear)
        front = rear = -1;

    else
        front = (front + 1) % SIZE;
}

void display()
{

    if (front == -1 && rear == -1)
    {
        system("clear");
        printf("====> Queue Is Empty No Elements Present <====\n");
        return;
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
