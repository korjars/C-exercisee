#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    struct Number
    {
        char name[20];
        char birthday[12];
    };
    int N;
    scanf("%d",&N);
    struct Number *number = malloc(N*sizeof(struct Number));
    for (int i = 0; i < N; i++)
    {
        scanf("%s %s",&number[i].name,&number[i].birthday);
        //printf("%s %s\n",number[i].name,number[i].birthday);
    }

    //   printf("%s %s\n",number[1].name,number[1].birthday);
    int n = 0;
    char  nim[20],Bmin[12];
    strcpy(nim,number[0].name);
    strcpy(Bmin,number[0].birthday);
    char max[20],Bmax[12];
    strcpy(max,number[0].name);
    strcpy(Bmax,number[0].birthday);
//    printf("%d %s %s\n",n,max,nim);
   for (int i = 0; i < 5; i++)
   {
       if(strncmp(number[i].birthday, "2014/09/06",10) <= 0 && strncmp("1814/09/06", number[i].birthday,10) <= 0)
       {
           n++;
       if(strcmp(number[i].birthday, Bmax) <= 0)
       {
           strcpy(Bmax,number[i].birthday);
           strcpy(max,number[i].name);
       }
       if(strcmp(number[i].birthday,Bmin) >= 0)
       {
           strcpy(Bmin,number[i].birthday);
           strcpy(nim,number[i].name);
       } 
       }
       
    
    }
    printf("%d %s %s\n",n,max,nim);
//    printf("");
   
    return 0;
}