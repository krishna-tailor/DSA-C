#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
} *head, *temp, *new;

void main_menu()
{
    printf("== == == SLL Operations == == ==\n");
    printf("--------------------------------\n");
    printf("1. Insert \n2. Delete \n3. Display \n4. Exit...\n");
}

void insert_menu()
{
    printf("== == == Insert Operations == == ==\n");
    printf("1. Insert From Begning \n2. Insert From Rear \n3. Insert At Specific Position \n4. Back To Main Menu..");
}

void create_node()
{
    int value;

    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        system("clear");
        printf("***** Memory OverFlow *****\n\n");
    }

    else
    {
        printf("Enter Your Value: ");
        scanf("%d", &value);

        new->data = value;
        new->next = NULL;
    }
}

void insert_beg()
{
    create_node();
    new->next = head;
    head = new;
    system("clear");
    printf("***** New Node Added Successfully *****\n\n");
}

void insert_end()
{
    if (head == NULL)
    {
        insert_beg();
    }

    else
    {
        create_node();
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = new;
        new->next = NULL;
        printf("***** New Node Added Successfully *****\n\n");
    }
}

void display()
{
    if (head == NULL)
    {
        system("clear");
        printf("***** No Nodes Available *****\n\n");
    }

    else
    {
        temp = head;
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != NULL);
        printf("\n\n");
    }
}

void insert_specific_pos()
{
    int pos;
    printf("Enter Position To Enter A Node: ");
    scanf("%d", &pos);

    if (head == NULL && pos > 1)
    {
        printf("***** Position Out Of Bound *****\n\n");
        return;
    }
    else if (pos == 1)
    {
        insert_beg();
        return;
    }

    else
    {
        create_node();
        temp = head;
        for (int i = 1; i <= pos - 2; i++)
        {
            if (temp == NULL)
            {
                system("clear");
                printf("***** Position Out Of Bound *****\n\n");
                return;
            }

            temp = temp->next;
        }

        new->next = temp->next;
        temp->next = new;
    }

    system("clear");
    printf("***** New Node Added Successfully *****\n\n");
}

int main()
{
    system("clear");
    int choice, choice1;

    do
    {
        main_menu();
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("clear");
            do
            {

                insert_menu();
                printf("\nEnter Your Choice: ");
                scanf("%d", &choice1);

                switch (choice1)
                {
                case 1:
                    system("clear");
                    insert_beg();
                    break;

                case 2:
                    system("clear");
                    insert_end();
                    break;

                case 3:
                    system("clear");
                    insert_specific_pos();
                    break;

                case 4:
                    system("clear");
                    printf("***** Returned To Main Menu *****\n\n");
                    break;

                default:
                    system("clear");
                    printf("***** Invalid Choice *****\n");
                    break;
                }
            } while (choice1 != 4);
            break;

        case 3:
            system("clear");
            display();
            break;

        case 4:
            system("clear");
            printf("***** Bye Bye Tata Good Bye Gaya *****\n");
            break;

        default:
            system("clear");
            printf("***** Invalid Choice *****\n\n");
            break;
        }

    } while (choice != 4);
}
