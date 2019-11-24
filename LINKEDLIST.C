#include<stdio.h>
#include<conio.h>
struct node
{
int info;
struct node*link;
};
struct node*start=NULL;
struct node*createnode()
{
struct node*n;
n=(struct node*)malloc(sizeof(struct node));
return(n);
}
void insertnode()
{
struct node*temp,*t;
temp=createnode();
printf("enter number ");
scanf("%d",&temp->info);
temp->link=NULL;
if(start==NULL)
{
start=temp;
}
else
{

t=start;
while(t->link!=NULL)
{
t=t->link;
}
t->link=temp;
}
printf("node has been created");
}
void deletenode()
{
struct node*t;
if(start==NULL)
{
printf("linked list is empty");
}
else
{
t=start;
start=start->link;
free(t);
}
printf("first node deleted successfully");
}
void viewlist()
{
struct node*t;
if(start==NULL)
{
printf("list is empty");
}
else
{
t=start;
while(t!=NULL)
{
printf("\t%d",t->info);
t=t->link;
}
}
}
int menu()
{
int ch;
printf("enter your choice\n");
printf("\n1-create a node");
printf("\n2-delete first node");
printf("\n3-view list");
printf("\n4-exit");
scanf("\n%d",&ch);
return(ch);
}
void main()
{
while(1)
{
clrscr();
switch(menu())
{
case 1:
	insertnode();
	break;
case 2:
	deletenode();
	break;
case 3:
	viewlist();
	break;
case 4:
	  exit(0);

default:
	printf("wrong choice");
	}getch();
	}}




