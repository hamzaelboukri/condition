#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxbooks 100

typedef struct
{
    char title[100];
    char autore[100];
    float price;
    int stock;
} book;

book books[maxbooks];
int bookcount=0;

void addbook()
{
    if (bookcount < maxbooks)
    {
        printf("title :");
        scanf("%s", books[bookcount].title);
        printf("autore :");
        scanf("%s", books[bookcount].autore);
        printf("price :");

        scanf("%f", &books[bookcount].price);
        printf("stock :");
        scanf("%d", &books[bookcount].stock);
        bookcount++;
    }
    else
    {
        printf("you need to delte book ");
    }
}
void displaybooks()
{
    if (bookcount == 0)
    {
        printf("you need to add book :");
    }
    else
        for (int i = 0; i < bookcount; i++)
        {
            printf("%s\n", books[i].title);
            printf("%s\n", books[i].autore);
            printf("%.2f\n", books[i].price);
            printf("%d\n", books[i].stock);
        }
}
void serch()
{

    char tabl[30];
    printf("what y want serche :");
    scanf("%s", tabl);
    int a = 0;
    for (int i = 0; i < bookcount; i++)
    {
        if (strcmp(books[i].title, tabl) == 0)
        {
            a = 1;
            printf("books found");
            printf("%s \n", books[i].title);
            printf("%s \n", books[i].autore);
            printf("%.2f \n", books[i].price);
            printf("%d \n", books[i].stock);
            break;
        }
    }

    if (a == 0)
    {
        printf("book not found\n");
    }
}

void deletd()
{

    char tabl2[30];
    int a = 0;
    printf(" entre book what y want delted :");
    scanf("%s", tabl2);
    for (int i = 0; i < bookcount; i++)
    {
        a = 1;
        if (strcmp(books[i].title, tabl2) == 0)
        {
            for (int j = i; j < bookcount - 1; j++)
            {
                books[i] = books[j + 1];
            }
            bookcount--;
            break;
        }
    }
    if (a == 0)
    {
        printf("delted book ");
    }
}
void modifier()
{
    int x, mod;
    printf("entre what you want modifier :");
    scanf("%d", &x);
    printf("entre  modifier :");
    scanf("%d", &mod);
    for (int i = 0; i < bookcount; i++)
    {
        if (books[i].stock == x)
        {
            books[i].stock = mod;
        }
        break;
    }

    printf("book modifier");
}
void total()
{
    int total = 0;
    for (int i = 0; i < bookcount; i++)
    {
        total = total + books[i].stock;
    }

    printf("totale number %d\nf", total);
}
int main()
{
    int choixe;
    do
    {
        printf("1-ajouter book \n");
        printf("2-display book \n");
        printf("3-serche book\n");
        printf("4-delted book\n");
        printf("5-modifier stock \n");
        printf("6-display total \n");
        printf("7-ext\n");
        scanf("%d", &choixe);

        switch (choixe)
        {
        case 1:
            addbook();

            break;
        case 2:
            displaybooks();

            break;
        case 3:
            serch();

            break;
        case 4:
            deletd();

            break;
        case 5:
            modifier();

            break;
        case 6:
            total();

            break;

        default:
            printf("exit");
            break;
        }
    } while (choixe != 7);
}
