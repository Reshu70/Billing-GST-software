#include<stdio.h>
#include<conio.h>
void main()
{
	char a[20];
	
	int price, gst=0, total=0;

	printf("\n Billing Software for Cafe Coffee Day - CCD \n");
	printf("\n============================================\n");
	printf("\nEnter the Name of the Iteam:");
	scanf("%s",&a);
	printf("\nEnter the price of iteam:");
	scanf("%d",&price);
	gst = ((price/100)*18);
	total = price*gst;
	printf("\n\n Cafe Coffee Day  \n\n");
	printf("\n======================\n");
	printf("\nIteam Price GST Total\n");
	printf("\n%s   %d   %d   %d\n", a,price,gst,total);
	printf("\n======================\n");
	printf("\nThank You DO Visit Again\n");
	getch();
	
}
