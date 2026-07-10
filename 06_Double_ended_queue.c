#include <stdlib.h>
#include <stdio.h>
#define SIZE 5

void inputRestricted();
void insertFromFront();
void insertFromRear();

int main()
{
    system("clear");
    int choice;

    do
    {
        printf("==== Double Ended Queue Operations ====\n");
        printf("---------------------------------------\n");
        printf("1. Input Restricted \n2. Output Restricted\n3. Exit Program");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            system("clear");
            inputRestricted();
            break;
        case 3:
            system("clear");
            printf("==== Thank You Bye Bye ====\n");
            break;

        default:
            system("clear");
            printf("==== Invalid Choice ====\n");
            break;
        }
    } while (choice != 3);
}

void inputRestricted()
{
    int choice;

    do
    {
        printf("==== Input Restricted Operations ====\n");
        printf("-------------------------------------\n");
        printf("1. Insert From Front \n2. Insert From Rear \n3. Return To Main Menu\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            system("clear");
            insertFromFront();
            break;

        case 2:
            system("clear");
            insertFromRear();
            break;

        case 3:
            system("clear");
            printf("=== === === Returned To Main Menu === === ===\n\n");
            break;

        default:
            system("clear");
            printf("==== Invlaid Choice ====\n\n");
            break;
        }
    } while (choice != 3);
}

void insertFromFront()
{
    int choice, element;
    int front = -1, rear = -1, queue[SIZE];

    do
    {
        printf("==== Insert From Front Operations ====\n");
        printf("--------------------------------------\n");
        printf("1. Enter Element \n2. Delete Element From Front \n3. Delete Element From Rear");
        printf("\n4. Delete Elements And Return To Last Menu\n");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            system("clear");
            // Checking If The Queue Is Full
            if ((front == 0 && rear == SIZE - 1) || (front == rear + 1))
            {
                printf("==> ==> Queue Is Over Flow <== <==\n\n");
                break;
            }

            // Updating Index
            if (front == -1)
                front = rear = 0;

            else if (front == 0)
                front = SIZE - 1;

            else
                front--;

            printf("Enter Your Element: ");
            scanf("%d", &element);

            queue[front] = element;

            system("clear");
            printf("==== %d Inserted Sucessfully <====\n\n", element);
            break;

        case 2:
            system("clear");
            // Checking If The Queue Is Already Empty Or Not
            if (front == -1)
            {
                printf("==> ==> Queue Is Empty <== <==\n\n");
                break;
            }

            printf("====> %d Deleted Successfully <====\n\n", queue[front]);

            if (front == rear)
                front = rear = -1;

            else if (front == SIZE - 1)
                front = 0;

            else
                front++;
            break;

        case 3:
            system("clear");
            // Checking If The Queue Is Already Empty Or Not
            if (rear == -1)
            {
                printf("==> ==> Queue Is Empty <== <==\n\n");
                break;
            }

            printf("====> %d Deleted Successfully <====\n\n", queue[rear]);

            if (front == rear)
                front = rear = -1;

            else if (rear == 0)
                rear = SIZE - 1;

            else
                rear--;
            break;

        case 4:
            system("clear");
            printf("=== === === Returned To Last Menu === === ===\n\n");
            break;

        default:
            system("clear");
            printf("==== Invlaid Choice ====\n\n");
            break;
        }

    } while (choice != 4);
}

void insertFromRear()
{
    int choice, element;
    int front = -1, rear = -1, queue[SIZE];
    do
    {
        printf("==== Insert From Rear Operations ====\n");
        printf("--------------------------------------\n");
        printf("1. Enter Element \n2. Delete Element From Front \n3. Delete Element From Rear");
        printf("\n4. Delete Elements And Return To Last Menu\n");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            system("clear");
            // Checking If The Queue Is Full
            if ((front == 0 && rear == SIZE - 1) || (front == rear + 1))
            {
                printf("==> ==> Queue Is Over Flow <== <==\n\n");
                break;
            }

            // Updating Index
            if (front == -1)
                front = rear = 0;

            else if (rear ==  SIZE -1)
                front = 0;

            else
                rear++;

            printf("Enter Your Element: ");
            scanf("%d", &element);

            queue[rear] = element;

            system("clear");
            printf("==== %d Inserted Sucessfully <====\n\n", element);
            break;

        case 2:
            system("clear");
            // Checking If The Queue Is Already Empty Or Not
            if (front == -1)
            {
                printf("==> ==> Queue Is Empty <== <==\n\n");
                break;
            }

            printf("====> %d Deleted Successfully <====\n\n", queue[front]);

            if (front == rear)
                front = rear = -1;

            else if (front == SIZE - 1)
                front = 0;

            else
                front++;
            break;

        case 3:
            system("clear");
            // Checking If The Queue Is Already Empty Or Not
            if (rear == -1)
            {
                printf("==> ==> Queue Is Empty <== <==\n\n");
                break;
            }

            printf("====> %d Deleted Successfully <====\n\n", queue[rear]);

            if (front == rear)
                front = rear = -1;

            else if (rear == 0)
                rear = SIZE - 1;

            else
                rear--;
            break;

        case 4:
            system("clear");
            printf("=== === === Returned To Last Menu === === ===\n\n");
            break;

        default:
            system("clear");
            printf("==== Invlaid Choice ====\n\n");
            break;
        }

    } while (choice != 4);
}