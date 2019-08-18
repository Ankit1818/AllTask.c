include<stdio.h>

#include<conio.h>

#include<string.h>

#define SIZE 20

struct bookdetail

{

          char name[20];

          char author[20];

          int pages;

          float price;

};

void output(struct bookdetail v[],int n);

void main()

{

          struct bookdetail b[SIZE];

          int n,i;

          clrscr();

          printf("Enter the Numbers of Books:");

          scanf("%d",&n);

          printf("\n");

          for(i=0;i<n;i++)

          {

                   printf("\t=:Book %d Detail:=\n",i+1);

                   printf("\nEnter the Book Name:\n");

                   scanf("%s",b[i].name);

                   printf("Enter the Author of Book:\n");

                   scanf("%s",b[i].author);

                   printf("Enter the Pages of Book:\n");

                   scanf("%d",&b[i].pages);

                   printf("Enter the Price of Book:\n");

                   scanf("%f",&b[i].price);

          }

          output(b,n);

          getch();

}