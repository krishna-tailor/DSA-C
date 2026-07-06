#include <stdlib.h>
#include <stdio.h>
#define SIZE 5
int queue[SIZE], front = -1, rear = -1;

void EnterElement()
{
    int value;

    if (rear == SIZE - 1)
    {
        system("clear");
        printf("====> Queue Is Full <====\n\n");
    }

    else if (front == -1 && rear == -1)
    {
        rear = front = 0;
        printf("Enter Value: ");
        scanf("%d", &value);

        queue[rear++] = value;

        system("clear");
        printf("====> %d Entered Successfully <====\n", value);
    }

    else
    {
        printf("Enter Value: ");
        scanf("%d", &value);

        queue[rear++] = value;
        system("clear");
        printf("====> %d Entered Successfully <====\n", value);
    }
}

void deleteElement()
{
    if (front == -1 && rear == -1)
    {
        printf("====> Queue Is already Empty <====\n");
    }

    else if (front == rear)
    {
        printf("====> %d Deleted Successfully and queue is empty <====\n", queue[front]);
        front = rear = -1;
    }

    else
    {
        printf("====> %d Deleted Successfully <====\n", queue[front]);
        front++;
    }
}

void display()
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d ",queue[i]);
    }

    printf("\n");
    
}

int main()
{
    system("clear");
    int choice;

    do
    {
        printf("\n////////////////////////////\n");
        printf("***** Queue Operations *****\n");
        printf("1. Enter Element \n2. Delete Element \n3. Display Elements \n4. Exit...");
        printf("\n____________________");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("clear");
            EnterElement();
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
            printf("**** Invalid Choice ****\n");
            break;
        }
    } while (choice != 4);
}