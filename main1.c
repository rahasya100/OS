#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
main()
{
 int x,i,j,k,cyd,temp,max;             //initialixze
 int head,array[x];                    //array list
 int  total=0,dif;
 printf("Enter maximum size of disk");
              //take a input from user of maximum size of disk
 scanf("%d",&max);

 printf("\nEnter the  maximum size of an array: ");   //takes maximum size of an array
 scanf("%d",&x);

 a:
   printf("\nEnter the current head position: ");       // current head position:
   scanf("%d",&head);

    if(head>max||head<=0)                               //conditional statement
         {printf("Enter  it again");
          goto a
        }

 printf("Enter the array elements:-");                   //count array elements
 array[0]=head;
 for(i=1;i<x;i++)

    {
 b:
