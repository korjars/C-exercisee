#include<stdio.h>

struct Date
{
    int year;
    int mouth;
    int day;
};
struct Book
{
    char title[129];
    char author[40];
    float price;
    struct Date date;
    char publisher[40];
};

struct Book getInput(struct Book book)
{
    printf("input title:");
    scanf("%s",book.title);
    printf("input author:");
    scanf("%s",book.author);    
    printf("input price:");
    scanf("%f",&book.price);
    printf("input Date:");
    scanf("%d-%d-%d",&book.date.year,&book.date.mouth,&book.date.day);
    printf("input publisher:");
    scanf("%s",book.publisher); 
    return book;   
}

void printBook(struct Book book)
{
    printf("title:%s\n",book.title);
    printf("author:%s\n",book.author);
    printf("price:%.2f\n",book.price);
    printf("Date:%d-%d-%d\n",book.date.year,book.date.mouth,book.date.day);
    printf("publisher:%s\n",book.publisher);
    
};

int main(void)
{
    struct Book b1,b2;

    // printf("input the first book...\n");
    // b1 = getInput(b1);
    // putchar('\n');
    // printf("input the second book...\n");
    // b2 = getInput(b2);
    // putchar('\n');

    // printf("\n input competed=========");

    // printf("first book:\n");

    // printBook(b1);
    // printf("Second book:\n");
    // printBook(b2);


    printf("%d\n",b1);
    printf("%d\n",b2);
    printf("%d\n",&b1);
    printf("%d\n",&b2);
struct Book *p[2]=  {&b1,&b2};
printf("%d   %d\n",*p,*(p+2));
printf("%d   %d\n",p[0],p[1]);
printf("%d %d %d\n",sizeof(p),sizeof(p+1),sizeof(p+2));
printf("%d %d %d\n",sizeof(*p),sizeof(*(p+1)),sizeof(*(p+2)));
printf("%d %d %d\n",sizeof(p[0]),sizeof(p[1]),sizeof(p[2]));

printf("%d %d %d\n",sizeof(b1),sizeof(b2),sizeof(p[2]));






    // struct fz {int x ;int y; } t1, t2;
    // struct anything {int a ; int b ;} *p;
    // p = &t1;
    // t1.x = 999;
    // t1.y = 111;
    // printf("t1.x = %d\n",t1.x);
    // printf("t2.x = %d\n",t2.x);
    // printf("t1.y = %d\n",t1.y);
    // printf("p->x = %d\n",p->a);
    // printf("(*P).a = %d\n",(*p).a);
    // printf("(*P).b = %d\n",(*p).b);
    // printf("t1.x = %d\n",t1.x);
    // printf("t1.x = %d\n",t1.x);
    // printf("t1.x = %d\n",t1.x);

    return 0;
}