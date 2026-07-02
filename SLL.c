/*
    Singly Linked List Program
*/

#include <stdio.h>
#include <stdlib.h>

struct SLL
{
    int data;
    struct SLL *next;
} *head = NULL, *temp, *node, *newNode, *ptemp;


void createNode()
{
    int value;
    printf("Enter Value: ");
    scanf("%d", &value);
    
    node = (struct SLL *)malloc(sizeof(struct SLL));
    
    node->data = value;
    node->next = NULL;
}

void mainMenu();
void insertMenu();
void insertFromFront();
void insertFromRear();
void insertBeforePos();
void insertAfterPos();

///////////////////////////////////////////////////////
/////////////// Display Functions ////////////////////
/////////////////////////////////////////////////////

void display();
void displaySort();
void originalDisplay();
void displayReverse();

int main()
{
    system("cls");
    int choice;

    do
    {
        mainMenu();
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("cls");
            do
            {
                insertMenu();
                printf("Enter Your Choice: ");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    system("cls");
                    insertFromFront();
                    break;

                case 2:
                    system("cls");
                    insertFromRear();
                    break;

                case 3:
                    system("cls");
                    insertBeforePos();
                    break;

                case 4:
                    system("cls");
                    insertAfterPos();
                    break;
                case 6:
                    system("cls");
                    break;

                default:
                    system("cls");
                    printf("Invalid Che..");
                    break;
                }

            } while (choice != 6);
            break;

        case 2:
            system("cls");
            display();
            break;

        case 3:
            system("cls");
            printf("Will Come Soon..");
            break;

        default:
            system("cls");
            printf("Invalid Che..");
            break;
        }
    } while (choice != 3);
}

void mainMenu()
{
    printf("1. Insert\n");
    printf("2. Display\n");
    printf("3. Exit..\n");
}

void insertMenu()
{
    printf("1. Insert From Front\n");
    printf("2. Insert From Rear\n");
    printf("3. Insert at the Before specific position\n");
    printf("4. Insert at the after specific Position\n");
    printf("5. Insert into sorted Linked list\n");
    printf("6. Back To Main Menu..\n");
}

void insertFromFront()
{
    createNode();
    node->next = head; // Default Value Null
    head = node;
}

void insertFromRear()
{
    int value;

    printf("Enter Your Value: ");
    scanf("%d", &value);

    newNode = (struct SLL *)malloc(sizeof(struct SLL));

    newNode->data = value;
    newNode->next = NULL;

    temp = head;
    free(node);
    do
    {
        node = (struct SLL *)malloc(sizeof(struct SLL));
        node->data = temp->data;
        node->next = temp->next;

        temp = temp->next;
    } while (temp->next != NULL || temp->next == NULL);
}

void insertBeforePos()
{
    int pos, i;
    printf("Enter position=>");
    scanf("%d", &pos);
    temp = head;
    for (i = 1; i < pos; i++)
    {
        ptemp = temp;
        temp = temp->next;
        if (temp == NULL)
        {
            printf("Position not found....");
            return;
        }
    }

    createNode();
    ptemp->next = node;
    node->next = temp;
}

void insertAfterPos()
{
    printf("insert after pos func called\n");
    int pos, value;

    printf("Enter The Position To Insert The Value: ");
    scanf("%d", &pos);

    temp = head;
    for (int i = 1; i <= pos; i++)
    {
        ptemp = temp;
        temp = temp->next;

        if (temp == NULL)
        {
            printf("\n\nNo Position Found\n\n");
            return;
        }
    }

    createNode();
    ptemp->next = node;
    node->next = temp;
}

void display()
{
    int choice;

    printf("1. Print Original Linekd List\n2. Print Sorted Linked List \n3. Print Linked List In Reverse Order\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);
    switch (choice)
    {

    case 1:
        system("cls");
        originalDisplay();
        break;

    case 2:
        system("cls");
        displaySort();
        break;

    case 3:
        system("clear");
        displayReverse();
        break;

    default:
        break;
    }
}

void originalDisplay()
{
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n\n");
}

void displaySort()
{
    int tempv, arr[100], i = 0;
    temp = head;

    do
    {
        arr[i] = temp->data;
        i++;
        temp = temp->next;
    } while (temp != NULL);

    for (int k = 0; k <= i; k++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[k] > arr[j])
            {
                tempv = arr[k];
                arr[k] = arr[j];
                arr[j] = tempv;
            }
        }
    }

    for (int k = 0; k <= i; k++)
    {
        printf("%d ", arr[k]);
    }

    printf("\n\n");
}

void displayReverse()
{
    int tempv, arr[100], i = 0, j = 0;
    temp = head;

    do
    {
        arr[i] = temp->data;
        i++;
        temp = temp->next;
        j++;
    } while (temp != NULL);

    j--;
   
    for (int k = 0; k <= i / 2; k++)
    {
        tempv = arr[k];
        arr[k] = arr[j];
        arr[j] = tempv;
        j--;
    }
  

    for (int k = 0; k < i; k++)
    {
        printf("%d ", arr[k]);
    }

    printf("\n\n");
}