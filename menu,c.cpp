#include<stdio.h>
#include<math.h>
int main ()
{
	float choice=0,l=0,b=0,r=0,rec=0,square=0,circle=0;
	printf("menu");
	printf("\n\t ***********");
	printf("\n 1.area of rectangle");
	printf("\n 2.area of circle");
	printf ("\n 3.area of square");
	printf("\n enter your choice");
	scanf("%d",choice);
	switch(choice)
	{
		case 1:
		{
			printf("\n enter l,b");
			scanf("%f%f",&l,&b);
			rec=l*b;
			printf("\n the area of rectangle is %f",rec);
			break;
		}
			case 2:
			{
				printf("\n enter l");
				scanf("%d",&l);
				square=(l*l);				
				printf("\n the area of square is %d",square);
				break;
			}
				case 3:
				{
					printf("\n enter r");
					scanf("%d",r);
					circle=pow((3.14*r),2);
					break;
				}
	return 0;
}
}
