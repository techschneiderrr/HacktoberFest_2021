//a code for memory allocation in computer so that
//we can have a proper optimization of memory so that the
//wastage of memory can be reduced and we can store more
//data.
//bin packing algorithm
//enter name of file as an integer

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create(int,int);
void del(int);
void compaction();
void display();
int
fname[10],fsize[10],fstart[10],freest[10],freesize[10],m=0,n=0,start;
int main()
{
int name,size,ch,i;
int *ptr;
ptr=(int *)malloc(sizeof(int)*100);
start=freest[0]=(int)ptr;
freesize[0]=500;
printf("\n\n");
printf(" Free start address Free Size\n\n");
for(i=0;i<=m;i++)
printf(" %d %d\n",freest[i],freesize[i]);
printf("\n\n");
while(1)
{
printf("1.Create.\n");
printf("2.Delete.\n");
printf("3.Compaction.\n");
printf("4.Exit.\n");
printf("Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter the name of file: ");
scanf("%d",&name);
printf("\nEnter the size of the file: ");
scanf("%d",&size);
create(name,size);
break;
case 2:
printf("\nEnter the file name which u want to delete: ");
scanf("%d",&name);
del(name);
break;
case 3:
compaction();
printf("\nAfter compaction the tables will be:\n");
display();
break;
case 4:
{
exit(0);
}
default:
printf("\nYou have entered a wrong choice.\n");
}
}
}
void create(int name,int size)
{
int i,flag=1,j,a;
for(i=0;i<=m;i++)
if( freesize[i] >= size)
a=i,flag=0;
if(!flag)
{
for(j=0;j<n;j++);
n++;
fname[j]=name;
fsize[j]=size;
fstart[j]=freest[a];
freest[a]=freest[a]+size;
freesize[a]=freesize[a]-size;
printf("\n The memory map will now be:\n\n");
display();
}
else
{
printf("\nNo enough space is available.System compaction......");
flag=1;
compaction();
display();
for(i=0;i<=m;i++)
if( freesize[i] >= size)
a=i,flag=0;
if(!flag)
{
for(j=0;j<n;j++);
n++;
fname[j]=name;
fsize[j]=size;
fstart[j]=freest[a];
freest[a]+=size;
freesize[a]-=size;
printf("\n The memory map will now be: \n\n");
display();
}
else
printf("\nNo enough space.\n");
}
}
void del(int name)
{
int i,j,k,flag=1;
for(i=0;i<n;i++)
if(fname[i]==name)
break;
if(i==n)
{
flag=0;
printf("\nNo such process exists......\n");
}
else
{
m++;
freest[m]=fstart[i];
freesize[m]=fsize[i];
for(k=i;k<n;k++)
{
fname[k]=fname[k+1];
fsize[k]=fsize[k+1];
fstart[k]=fstart[k+1];
}
n--;
}
if(flag)
{
printf("\n\n After deletion of this process the memory map will be : \n\n");
display();
}
}
void compaction()
{
int i,j,size1=0,f_size=0;
if(fstart[0]!=start)
{
fstart[0]=start;
for(i=1;i<n;i++)
fstart[i]=fstart[i-1]+fsize[i-1];
}
else
{
for(i=1;i<n;i++)
fstart[i]=fstart[i-1]+fsize[i-1];
}
f_size=freesize[0];
for(j=0;j<=m;j++)
size1+=freesize[j];
freest[0]=freest[0]-(size1-f_size);
freesize[0]=size1;
m=0;
}
void display()
{
int i;
printf("\n *** MEMORY MAP TABLE *** \n");
printf("\n\nNAME SIZE STARTING ADDRESS \n\n");
for(i=0;i<n;i++)
printf(" %d%10d%10d\n",fname[i],fsize[i],fstart[i]);
printf("\n\n");
printf("\n\n*** FREE SPACE TABLE ***\n\n");
printf("FREE START ADDRESS FREE SIZE \n\n");
for(i=0;i<=m;i++)
 printf(" %d %d\n",freest[i],freesize[i]);
}
