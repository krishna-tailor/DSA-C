#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int deQueue[SIZE], f = -1, r = -1;

void InputRestricted();
void IRFront();
void IInput();
void IRRear();
void RInput();

void DeleteFromFront();
void DeleteFromRear();

void OutputRestricted();
void ORFront();
void ORRear();

void Display();

int main()
{
    system("cls");
    int choice;
    do
    {

        printf("1. Input restricted \n2. Output Restricted \n3. Exit...");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("clear");
            InputRestricted();
            break;

        case 2:
            system("clear");
            OutputRestricted();
            break;

        default:
            system("clear");
            printf("****** Invalid Choice ******");
            break;
        }
    } while (choice != 3);
}

void InputRestricted()
{
    int choice;
    printf("1. Insert From Front \n2. Insert From Back");
    printf("\nEnter Your Choice: ");
    scanf("%d", &choice);
    system("clear");

    switch (choice)
    {
    case 1:
        IRFront();
        break;

    case 2:
        IRRear();
        break;

    default:
        system("clear");
        printf("***** Invalid Choice *****");
        break;
    }
}

void IRFront()
{
    int choice;
    do
    {
        printf("\n\n");
        printf("1. Insert Element \n2. Remove Element From Front \n3. Remove Element From Rear \n4. Display \n5. Exit..");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            IInput(); // Takes Input Of Element And Stores In Front Of The Queue
            break;

        case 2:
            DeleteFromFront();
            break;

        case 3:
            DeleteFromRear();
            break;

        case 4:
            Display();
            break;

        case 5:
            system("clear");
            printf("Exiting....\n");
            break;

        default:
            break;
        }

    } while (choice != 5);
}

void IInput()
{
    int element;

    if (f == -1 && r == -1)
    {
        f = r = 0;
        printf("\nEnter Your Element: ");
        scanf("%d", &element);

        deQueue[f] = element;
        system("clear");
        printf("**** Element %d Inserted Successfully ****\n\n", element);
    }

    else if (f == r + 1 || f == 0 && r == SIZE - 1)
    {
        system("clear");
        printf("**** Queue Is Full ****");
    }

    else if (f == 0)
    {
        f = SIZE - 1;
        printf("\nEnter Your Element: ");
        scanf("%d", &element);

        deQueue[f] = element;
        system("clear");
        printf("**** Element %d Inserted Successfully ****\n\n", element);
    }

    else
    {
        f--;
        printf("\nEnter Your Element: ");
        scanf("%d", &element);

        deQueue[f] = element;
        system("clear");
        printf("**** Element %d Inserted Successfully ****\n\n", element);
    }
}

void DeleteFromFront()
{
    if (f == -1 && r == -1)
    {
        system("clear");
        printf("**** Queue Is Empty ****");
        return;
    }

    else if (f == r)
    {
        system("clear");
        printf("**** Element %d Deleted Successfully ****", deQueue[f]);
        f = r = -1;
        return;
    }

    else if (f == SIZE - 1)
    {
        system("clear");
        printf("**** Element %d Deleted Successfully ****", deQueue[f]);
        f = 0;
        return;
    }

    system("clear");
    printf("**** Element %d Deleted Successfully ****", deQueue[f]);
    f++;
    return;
}

void DeleteFromRear()
{
    if (f == -1 && r == -1)
    {
        system("clear");
        printf("**** Queue Is Empty ****");
        return;
    }

    else if (f == r)
    {
        system("clear");
        printf("**** Element %d Deleted Successfully ****", deQueue[r]);
        deQueue[r] = 0;
        f = r = -1;
        return;
    }

    else if (r == 0)
    {
        system("clear");
        printf("**** Element %d Deleted Successfully ****", deQueue[r]);
        deQueue[r] = 0;
        r = SIZE - 1;
        return;
    }

    system("clear");
    printf("**** Element %d Deleted Successfully ****", deQueue[r]);
    deQueue[r] = 0;
    r--;
}

void IRRear()
{
    int choice;
    do
    {

        printf("\n\n");
        printf("1. Insert Element \n2. Remove Element From Front \n3. Remove Element From Rear \n4. Display \n5. Exit..");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            RInput();
            break;

        case 2:
            system("clear");
            DeleteFromFront();
            break;

        case 3:
            DeleteFromRear();
            break;

        case 4:
            Display();
            break;

        case 5:
            system("clear");
            printf("Exiting....\n");
            break;

        default:
            break;
        }
    } while (choice != 5);
}

void RInput()
{
    int element;

    if (f == -1 && r == -1)
    {
        f = r = 0;

        printf("\nEnter Your Element: ");
        scanf("%d", &element);
        deQueue[r] = element;
        system("clear");
        printf("**** Element %d Inserted Successfully ****\n\n", element);
    }

    else if (r == SIZE - 1 && f != 0)
    {
        r = 0;
        printf("\nEnter Your Element: ");
        scanf("%d", &element);

        deQueue[r] = element;
        system("clear");
        printf("**** Element %d Inserted Successfully ****", element);
    }

    else if (r == SIZE - 1 || r == f - 1)
    {
        system("clear");
        printf("\n ******** Queue Is Full ********");
    }

    else if (r < f)
    {
        r++;
        printf("\nEnter Your Element: ");
        scanf("%d", &element);

        deQueue[r] = element;
        system("clear");
        printf("**** Element %d Inserted Successfully ****", element);
    }

    else
    {
        printf("\nEnter Your Element: ");
        scanf("%d", &element);

        r++;
        deQueue[r] = element;
        system("clear");
        printf("**** Element %d Inserted Successfully ****", element);
    }
}

void OutputRestricted()
{
    int choice;
    system("cls");
    printf("1. Delete From Front \n2. Delete From Back");
    printf("\nEnter Your Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        ORFront();
        break;

    case 2:
        ORRear();
        break;

    default:
        break;
    }
}

void ORFront()
{
    int choice, element;
    do
    {
        printf("\n\n");
        printf("1. Insert Element From Front \n2. Insert Element From Rear \n3. Remove Element \n4. Display \n5. Exit..");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            IInput();
            break;

        case 2:
            RInput();
            break;

        case 3:
            DeleteFromFront();
            break;

        case 4:
            Display();
            break;

        case 5:
            system("clear");
            printf("Exiting....");
            break;

        default:
            break;
        }

    } while (choice != 5);
}

void ORRear()
{
    int choice, element;
    do
    {
        printf("\n\n");
        printf("1. Insert Element From Front \n2. Insert Element From Rear \n3. Remove Element \n4. Display \n5. Exit..");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            IInput();
            break;

        case 2:
            RInput();
            break;

        case 3:
            DeleteFromRear();
            break;

        case 4:
            Display();
            break;

        case 5:
            system("clear");
            printf("Exiting....");
            break;

        default:
            break;
        }

    } while (choice != 5);
}

void Display()
{
    system("clear");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", deQueue[i]);
}