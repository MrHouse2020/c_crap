#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
}*p,*q,*start;
void main()
{
int no,choice,newno,cont,delno;
start=NULL;
clrscr();
do
{
printf("\n menu");
printf("\n 1.insertion at first");
printf("\n 2.insertion in between");
printf("\n 3.insertion at end");
printf("\n 4. deletion at first");
printf("\n 5. deletion in between");
printf("\n 6. deletion at last");
printf(" \n 7.display");

printf("\n enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
p=(struct node*)malloc(sizeof(struct node));
printf("enter number for the new node");
scanf("%d",&no);
p->info=no;
if(start==NULL)//list is completely empty
{
start=p;
p->next=NULL;
}
else
{
p->next=start;
start=p;
}
break;
case 2:  //insertion in between
p=(struct node*)malloc(sizeof(struct node));
printf("enter number for the new node");
scanf("%d",&no);
p->info=no;
printf("enter the number after which u want to insert");
scanf("%d",&newno);
q=start;
while(q->info!=newno)
q=q->next;
p->next=q->next;
q->next=p;
break;
case 3:///insertion at last
p=(struct node*)malloc(sizeof(struct node));
printf("enter number for the new node");
scanf("%d",&no);
p->info=no;
q=start;
while(q->next!=NULL)
q=q->next;
q->next=p;
p->next=NULL;
break;
case 4://deletion at first
if(start==NULL)
{
printf("\nno node present");
break;
}
else
{
p=start;
if(p->next==NULL)///only one node
{
start=NULL;
free(p);
}
else  //more than one node
{
p=start;
start=p->next;
free(p);
}
}
break;
case 5://deletion in between
if(start==NULL)
{
printf("\nno node present");
break;
}
else
{
printf("enter value of node to be deleted:");
scanf("%d",&delno);
q=start;
while(q->info!=delno)
q=q->next;
p=start;
while(p->next!=q)
p=p->next;
p->next=q->next;
printf("%d deleted",q->info);
free(q);
}
break;
case 6://deletion at last
if(start==NULL)
{
printf("\nno node present");
break;
}
else
{
q=start;
while(q->next!=NULL)
q=q->next;
p=start;
while(p->next!=q)
p=p->next;
printf("%d deleted",q->info);
p->next=NULL;
free(q);
}
break;
case 7://display
if(start==NULL)
printf("\n list is empty.. no node to display");
else
{
q=start;
while(q!=NULL)
{
printf("\n %d",q->info);
q=q->next;
}
}
break;
}
printf("\ndo u want to cont.press 1 for yes");
scanf("%d",&cont);
}while(cont==1);
getch();
}
