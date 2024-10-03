#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define reservation 100

typedef struct
{
    int id;
    char name[30];
    char first_name[30];
    char satuts[30];
    char phone[30];
    int age;
    char reservaton_date[11];
} reserve;
reserve res[reservation]= {
     {1, "hamza", "bkr", "validated", "0687546662", 25, "01-01-2024"},
    {2, "noha", "fakri", "postponed", "064358729", 30, "08-01-2024"},
    {3, "cr7", "no", "canceled", "0145784312", 22, "03-01-2024"},
    {4, "kuroko", "hokmi", "processed", "0657983627", 28, "04-01-2024"},
    {5, "abdo", "samir", "validated", "0784560987", 26, "05-01-2024"},
    {6, "iman", "naroto", "postponed", "07854623", 31, "06-01-2024"},
    {7, "hinat", "hitler", "canceled", "0689784534", 29, "07-01-2024"},
    {8, "soha", "ksiri", "processed", "0789654321", 24, "02-01-2024"},
    {9, "mohammed", "malyan", "validated", "0712345678", 27, "09-01-2024"},
    {10, "messi", "leo", "postponed", "076589543", 23, "10-01-2024"},
};


int resservationcount = 0;
int idgenerator = 0;
void search();
void serchbydate();
void serchbyid();
void serchbyname();
void tri();
void tribyalphabet();
void tribydate();
void tribystatus();
void addreservation();
float calculateage();
void displaystatistics();
void countage();
void reservationsbystatus();
void modidfier_and_delet();
void elment10();

void displaymenu()
{

    printf("1- add reservation\n");
    printf("2-display reservation\n");
    printf("3-modifier and supprimer  reservation \n");
    printf("4-Trier  reservations\n");
    printf("5-serche  reservation\n");
    printf("6-dispalay  status\n");

    printf("7-ext\n");
    printf("choix :\n");
}

void addreservation()
{
    if (resservationcount < reservation)
    {

        printf("entre name  :");
        scanf("%s", res[resservationcount].name);
        printf("entre first name :");
        scanf("%s", res[resservationcount].first_name);
        printf("entre age of user :");

        scanf("%d", &res[resservationcount].age);
        printf("ente phone number  :");
        scanf("%s", &res[resservationcount].phone);
        idgenerator++;
        printf("enter resservation Date (dd-mm-yyyy): ");
        scanf("%s", res[resservationcount].reservaton_date);
        int choce;
        printf("Choisissez le statut:\n");
        printf("1 - validated\n");
        printf("2 - postponed\n");
        printf("3 - canceled\n");
        printf("4 - processed\n");
        scanf("%d", &choce);

        switch (choce)

        {
        case 1:

            strcpy(res[resservationcount].satuts, "validated");

            break;
        case 2:

            strcpy(res[resservationcount].satuts, "postponed");

            break;
        case 3:

            strcpy(res[resservationcount].satuts, "canceled");

            break;
        case 4:

            strcpy(res[resservationcount].satuts, "processed");

            break;

        default:
            printf("invalid choice\n");
            break;
        }

        resservationcount++;

        res[resservationcount].id = idgenerator++;
        printf(" id:%d\n", res[resservationcount].id);
    }
    else
    {
        printf("maximum number of resservations reached.\n ");
    }
}

void displayressirvtion()
{
    if (resservationcount == 0)
    {
        printf("no ressrvation  :");
    }
    else
        for (int i = 0; i < resservationcount; i++)
        {
            printf("name :%s\n", res[i].name);
            printf("first name :%s\n", res[i].first_name);
            printf("age:%d\n", res[i].age);
            printf("phone:%s\n", res[i].phone);
            printf("satuts:%s\n", res[i].satuts);
            printf(" id:%d\n", res[i].id);
        }
}

void tri()
{
    int choixe;

    printf("  tri  :\n");

    printf("1-tri by name (alphabet)\n");
    printf("2-tri by date\n");
    printf("3-tri by status\n");
    printf("4-exit\n");

    printf("Choixe: ");
    scanf("%d", &choixe);

    switch (choixe)
    {
    case 1:
        tribyalphabet();
        break;
    case 2:
        tribydate();
        break;
    case 3:
        tribystatus();
        break;
    case 4:
        displaymenu();
    default:
        printf("invalid choice\n");
    }
}

void tribyalphabet()
{
    for (int i = 0; i < resservationcount; i++)
    {
        for (int j = 0; j < resservationcount  - 1; j++)
        {
            if (strcmp(res[j].name, res[j + 1].name) > 0)
            {
                reserve temp = res[j];
                res[j] = res[j + 1];
                res[j + 1] = temp;
            }
        }
    }
}
void tribydate()
{
    for (int i = 0; i < resservationcount ; i++)
    {
        for (int j = 0; j < resservationcount  - 1; j++)
        {
            if (strcmp(res[j].reservaton_date, res[j + 1].reservaton_date) > 0)
            {
                reserve temp = res[j];
                res[j] = res[j + 1];
                res[j + 1] = temp;
            }
        }
    }
    displayressirvtion();
}
void tribystatus()
{
    for (int i = 0; i < resservationcount ; i++)
    {
        for (int j = 0; j < resservationcount  - 1; j++)
        {
            if (strcmp(res[j].satuts, res[j + 1].satuts) > 0)
            {
                reserve temp = res[j];
                res[j] = res[j + 1];
                res[j + 1] = temp;
            }
        }
    }
    displayressirvtion();
}
void search()
{
    int choice;

    printf(" Search:\n");

    printf("1- search by name\n");
    printf("2- search by id\n");
    printf("3- search by date\n");

    printf("4- exit\n");

    printf("choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        serchbyname();
        break;
    case 2:
        serchbyid();
        break;
    case 3:
        serchbydate();
        break;
    case 4:
        displaymenu();
        break;
    default:
        printf("invalid choice \n");
    }
}

void serchbyname()
{

    char tabl[30];
    printf(" serche :");
    scanf("%s", tabl);
    
    for (int i = 0; i < resservationcount; i++)
    {

        if (strcmp(res[i].name, tabl) == 0)
        {

            
            printf("resseraoin found !");
             printf("name :%s\n", res[i].name);
            printf("first name :%s\n", res[i].first_name);
            printf("age:%d\n", res[i].age);
            printf("phone:%s\n", res[i].phone);
            printf("satuts:%s\n", res[i].satuts);
            printf(" id:%d\n", res[i].id);
        }
    }
    
}
void serchbyid()
{

    int id;
    printf(" serche :");
    scanf("%d", &id);
    
    for (int i = 0; i < resservationcount; i++)
    {
        if (res[i].id == id)
        {
            
            printf("resseraoin found !");
             printf("name :%s\n", res[i].name);
            printf("first name :%s\n", res[i].first_name);
            printf("age:%d\n", res[i].age);
            printf("phone:%s\n", res[i].phone);
            printf("satuts:%s\n", res[i].satuts);
            printf(" id:%d\n", res[i].id);
        }
    }
    
}
void serchbydate()
{

    char date[11];
    printf(" serche :");
    scanf("%s", date);
    int a=0;
    for (int i = 0; i < resservationcount; i++)
    {
        if (strcmp(res[i].reservaton_date, date) == 0)
        {
            a=1;
            printf("resseratoin found !");
            printf("===========================");

             printf("name :%s\n", res[i].name);
            printf("first name :%s\n", res[i].first_name);
            printf("age:%d\n", res[i].age);
            printf("phone:%s\n", res[i].phone);
            printf("satuts:%s\n", res[i].satuts);
            printf(" id:%d\n", res[i].id);
        }
    }
   

    if (a != 1)
    {
        printf("No reservation found for the date %s.\n", date);
    }
}
void modidfier_and_delet()
{
    int id;
    int found = 0;

    printf("Enter the reservation id to modify or delete: ");
    scanf("%d", &id);

    for (int i = 0; i < resservationcount; i++)
    {
        if (res[i].id == id)
        {
            found = 1;

            int choice;
            printf("1. modifier redservation\n");
            printf("2. delete redservation\n");
            printf("chose an option: ");
            scanf("%d", &choice);

            if (choice == 1)
            {
                int x;
                printf("1-modifer name: ");
                printf("2-modifer first name: ");
                printf("3-modifer age: ");
                printf("4-modifer phonr number: ");
                printf("5-modifer date (dd-mm-yyyy: ");
                scanf("%d", &x);
                switch (x)
                {
                case 1:
                    printf("enter new name: ");
                    scanf("%s", res[i].name);
                    break;
                case 2:
                    printf("enter new first name: ");
                    scanf("%s", res[i].first_name);

                    break;
                case 3:
                    printf("enter new age: ");
                    scanf("%d", &res[i].age);
                    break;
                case 4:
                    printf("enter new phone number: ");
                    scanf("%s", res[i].phone);

                    break;
                case 5:
                    printf("enter new reservation date (dd-mm-yyyy): ");
                    scanf("%s", res[i].reservaton_date);

                    break;

                default:
                    printf("ivalide number");
                    break;
                }

                int choce;
                printf("Choisissez le statut:\n");
                printf("1 - validated\n");
                printf("2 - postponed\n");
                printf("3 - canceled\n");
                printf("4 - processed\n");
                scanf("%d", &choce);

                switch (choce)

                {
                case 1:

                    strcpy(res[resservationcount].satuts, "validated");

                    break;
                case 2:

                    strcpy(res[resservationcount].satuts, "postponed");

                    break;
                case 3:

                    strcpy(res[resservationcount].satuts, "canceled");

                    break;
                case 4:

                    strcpy(res[resservationcount].satuts, "processed");

                    break;

                default:
                    printf("invalid choice\n");
                    break;
                }
            }
            else if (choice == 2)
            {

                printf(" entre id resvretion what you want delted :");
                scanf("%d", &id);

                for (int j = i; j < resservationcount - 1; j++)
                {
                    res[i] = res[j + 1];
                }
                resservationcount--;
                break;
            }
            displayressirvtion();
        }
        if (found == 0)
        {
            printf(" no delted ");
        }
    }
}
void displaystatistics()
{

    printf("1 - calcule average age of clinse\n");
    printf("2 - Count clins by age group\n");
    printf("3 - Count resservations by status\n");
    printf("4 - exit\n");

    int choice;
    printf("Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("average age: %.2f\n", calculateage());
        break;
    case 2:
        countage();
        break;
    case 3:
        reservationsbystatus();
        break;
    case 4:
        displaymenu();
        break;
    default:
        printf("invalid \n");
    }
}

float calculateage()
{
    int totalAge = 0;
    for (int i = 0; i < resservationcount; i++)
    {
        totalAge += res[i].age;
    }
    return (float)(totalAge / resservationcount);
}

void countage()
{
    int age01 = 0, age02 = 0, age03 = 0;

    for (int i = 0; i < resservationcount; i++)
    {
        if (res[i].age <= 18)
            age01++;
        else if (res[i].age <= 35)
            age02++;
        else
            age03++;
    }

    printf("0-18 years: %d\n", age01);
    printf("19-35 years: %d\n", age02);
    printf("36+ years: %d\n", age03);
}
void reservationsbystatus()
{
    int validated = 0, postponed = 0, canceled = 0, processed = 0;

    for (int i = 0; i < resservationcount; i++)
    {
        if (strcmp(res[i].satuts, "validated") == 0)
            validated++;
        else if (strcmp(res[i].satuts, "postponed") == 0)
            postponed++;
        else if (strcmp(res[i].satuts, "canceled") == 0)
            canceled++;
        else if (strcmp(res[i].satuts, "processed") == 0)
            processed++;
    }

    printf("validated: %d\n", validated);
    printf("postponed: %d\n", postponed);
    printf("canceled: %d\n", canceled);
    printf("processed: %d\n", processed);
}

int main()

{

    int choix;
    do
    {
        displaymenu();
        printf("Veuillez choisir une option: ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            system("cls");
            printf("add resstoin...\n");
            addreservation();
            break;
        case 2:
            system("cls");
            printf("display...\n");
            displayressirvtion();
            break;

        case 3:
            system("cls");
            printf("modifier and delet...\n");
            modidfier_and_delet();
            break;

        case 4:
            system("cls");
            printf("tri ...\n");
            tri();
            break;

        case 5:
            system("cls");
            printf("searche ...\n");
            search();
            break;

        case 6:
            system("cls");
            displaystatistics();
            break;

            ;
            break;
        case 7:
            system("cls");
            printf("exit program.\n");
            break;

        default:
            system("cls");
            printf(".\n");
        }

    } while (choix != 7);

    return 0;
}