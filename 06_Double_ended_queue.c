#include <stdlib.h>
#include <stdio.h>
#define SIZE 5

int front = -1, rear = -1, queue[SIZE], element;

void insertf();
void insertr();

void deletef();
void deleter();

void outputRestricted();
void inputRestricted();

void insertFromFront();
void insertFromRear();

void deleteFromFront();
void deleteFromRear();

int main()
{
    int choice;
    system("clear");
    do
    {
        printf("===== Double Ended Queue Operations ===== \n");
        printf("----------------------------------------- \n");
        printf("1. Input Restricted \n2. Output restricted \n3. Exit Program\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("clear");
            inputRestricted();
            break;

        case 2:
            system("clear");
            outputRestricted();
            break;

        case 3:
            system("clear");
            printf("==== Thank You Bye Bye ====\n");
            break;

        default:
            system("clear");
            printf("==== Invalid Choice ====\n\n");
            break;
        }
    } while (choice != 3);
}

void insertf()
{
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1))
    {
        printf("== == == Queue Is OvferFlow == == ==\n\n");
        return;
    }

    if (front == -1)
        front = rear = 0;

    else if (front == 0)
        front = SIZE - 1;

    else
        front--;

    printf("Enter Element To Enter: ");
    scanf("%d", &element);

    queue[front] = element;

    system("clear");
    printf("==> ==> %d Inserted Sucessfully <== <==\n\n", element);
}

void insertr()
{
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1))
    {
        printf("== == == Queue Is OvferFlow == == ==\n\n");
        return;
    }

    if (front == -1)
        front = rear = 0;

    else if (rear == SIZE - 1)
        rear = 0;

    else
        rear++;

    printf("Enter Element To Enter: ");
    scanf("%d", &element);

    queue[rear] = element;

    system("clear");
    printf("==> ==> %d Inserted Sucessfully <== <==\n\n", element);
}

void deletef()
{
    if (front == -1)
    {
        printf("== == == Queue Is Empty == == ==\n\n");
        return;
    }

    printf("==> ==> %d Deleted Sucessfully <== <==\n\n", queue[front]);

    if (front == rear)
        front = rear = -1;

    else if (front == SIZE - 1)
        front = 0;

    else
        front++;
}

void deleter()
{
    if (front == -1)
    {
        printf("== == == Queue Is Empty == == ==\n\n");
        return;
    }

    printf("==> ==> %d Deleted Sucessfully <== <==\n\n", queue[rear]);

    if (front == rear)
        front = rear = -1;

    else if (rear == 0)
        rear = SIZE - 1;

    else
        rear--;
}

void inputRestricted()
{
    int choice;

    do
    {
        printf("===== Input Restricted Operations =====\n");
        printf("---------------------------------------\n");
        printf("1. Insert From Front and Delete From Both Sides \n2. Insert From Rear and Delete From Both Sides\n3. Retrun To Main Menu");
        printf("\nEnter Your Choice: ");
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
            printf("== == == Returned To Main Menu == == ==\n\n");
            break;

        default:
            system("clear");
            printf("== == == Invalid Choice == == ==\n\n");
            break;
        }
    } while (choice != 3);
}

void insertFromFront()
{
    int choice;
    do
    {
        printf("===== Insert From front Operations =====\n");
        printf("----------------------------------------\n");
        printf("1. Insert Element \n2. Delete From front \n3. Delete From Rear \n4. Back To Last Menu\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("clear");
            insertf();
            break;

        case 2:
            system("clear");
            deletef();
            break;

        case 3:
            system("clear");
            deleter();
            break;

        case 4:
            system("clear");
            printf("== == == Returned To Last Menu == == ==\n\n");
            break;

        default:
            system("clear");
            printf("== == == Invalid Choice == == ==\n\n");
            break;
        }
    } while (choice != 4);
}

void insertFromRear()
{
    int choice;
    do
    {
        printf("===== Insert From Rear Operations =====\n");
        printf("----------------------------------------\n");
        printf("1. Insert Element \n2. Delete From front \n3. Delete From Rear \n4. Back To Last Menu\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("clear");
            insertr();
            break;

        case 2:
            system("clear");
            deletef();
            break;

        case 3:
            system("clear");
            deleter();
            break;

        case 4:
            system("clear");
            printf("== == == Returned To Last Menu == == ==\n\n");
            break;

        default:
            system("clear");
            printf("== == == Invalid Choice == == ==\n\n");
            break;
        }
    } while (choice != 4);
}

void outputRestricted()
{
    int choice;

    do
    {
        printf("===== Output Restricted Operations =====\n");
        printf("---------------------------------------\n");
        printf("1. Delete From Front And Enter Elements From Both Sides \n2. Delete From Rear And Enter Elements From Both Sides\n3. Retrun To Main Menu");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("clear");
            deleteFromFront();
            break;

        case 2:
            system("clear");
            deleteFromRear();
            break;

        case 3:
            system("clear");
            printf("== == == Returned To Main Menu == == ==\n\n");
            break;

        default:
            system("clear");
            printf("== == == Invalid Choice == == ==\n\n");
            break;
        }
    } while (choice != 3);
}

void deleteFromFront()
{
    int choice;
    do
    {
        printf("===== Delete From Front Operations =====\n");
        printf("----------------------------------------\n");
        printf("1. Insert Element From Front \n2. Insert From Rear \n3. Delete Element \n4. Back To Last Menu\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("clear");
            insertf();
            break;

        case 2:
            system("clear");
            insertr();
            break;

        case 3:
            system("clear");
            deletef();
            break;

        case 4:
            system("clear");
            printf("== == == Returned To Last Menu == == ==\n\n");
            break;

        default:
            system("clear");
            printf("== == == Invalid Choice == == ==\n\n");
            break;
        }
    } while (choice != 4);
}

void deleteFromRear()
{
    int choice;
    do
    {
        printf("===== Delete From Rear Operations =====\n");
        printf("----------------------------------------\n");
        printf("1. Insert Element From Front \n2. Insert From Rear \n3. Delete Element \n4. Back To Last Menu\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("clear");
            insertf();
            break;

        case 2:
            system("clear");
            insertr();
            break;

        case 3:
            system("clear");
            deleter();
            break;

        case 4:
            system("clear");
            printf("== == == Returned To Last Menu == == ==\n\n");
            break;

        default:
            system("clear");
            printf("== == == Invalid Choice == == ==\n\n");
            break;
        }
    } while (choice != 4);
}
