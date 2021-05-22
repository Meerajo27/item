#include<stdio.h>
 main()
{
	int item1,item2,item3,item4,item5;
	printf("pick an item:\n1. pizza\n2. burger\n3. sandwitch\n4. pasta\n5. drinks");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
	 case 1:
	        printf("item : pizza \n price :120");
	        break;
	 case 2:
	        printf("item : burger \n price :150");
	        break;
	 case 3:
	       printf("item : sandwitch \n price :80");
	       break;
	 case 4:
	       printf("item : pasta \n price : 60");
	       break;
	 case 5:
	       printf("item : drinks \n price :50");
	       break;      
	 default : printf("invalid choice");
	}
}

