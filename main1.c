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
    printf("\nEnter the %d element of the array ",i);
    scanf("%d",&array[i]);
    if(array[i]>=max||array[i]<=0)                        //conditional statement
        {printf("enter again");
          goto b;
        }


    }

    for (i=0;i<x;i++)
                                            //for max no of sylinders
    {   for(j=i+1;j<x;j++)
         {
            if(array[i]>array[j])
            {  temp=array[i];
               array[i]=array[j];
               array[j]=temp;
            }

          }
   }

 for(j=0;j<x;j++)
   {
     if(array[j]==head)
        {
		  dif=cyd(array[j+1]-array[j]);                       //print if max
           total+=dif;
           printf("Steps covered are %d \n",array[j],array[j+1],dif);
                if(j==x-1)
				  {
