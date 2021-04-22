#include<stdio.h>
struct Book
{
    char title[120];
    char author[40];
    float price;
    unsigned int date;
    char publisher[40];
} book;
int main()
{
    printf("input title:\n");
    scanf("%s",book.title);
    printf("input author:\n");
    scanf("%s",book.author);
    printf("input price:\n");
    scanf("%f",&book.price);
    printf("input date:\n");
    scanf("%d",&book.date);  
    printf("input publisher:\n");
    scanf("%s",book.publisher); 

    printf("========input competed!=========\n");

    printf("title %s\n",book.title);
    printf("author %s\n",book.author);
    printf("price %f\n",book.price);
    printf("date %d\n",book.date);
    printf("pulisher %s\n",book.publisher);
    return 0;
}