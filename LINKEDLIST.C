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
struct node*reverselist()
{
struct node*t1=NULL;
struct node*t2=NULL;
while(start!=NULL)
{
t2= start->link;
start->link=t1;
t1=start;
start=t2;
}
return(t1);
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
printf("\n4-reverse list");
printf("\n5-exit");
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
	 start=reverselist();
	  break;

case 5:
	exit(0);
default:
	printf("wrong choice");
	}getch();
	}}




