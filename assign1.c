#include<stdio.h>
#include<stdlib.h>

typedef struct Date
{
	int day;
	int month;
	int year;
}date_t;
void accept_record( date_t *ptr  )
{
	printf("day	:	\n");
	scanf("%d", &ptr->day);
	printf("month	:	\n");
	scanf("%d", &ptr->month);
	printf("year	:	\n");
	scanf("%d", &ptr->year);
}
void print_record( date_t *ptr  )
{
	printf("\n%d-%d-%d\n", ptr->day,ptr->month,ptr->year);
}
void init_date(date_t *ptr)
{
//	date_t d;
//	d.day=10;
//	d.month=12;
//	d.year=2020;
//	printf("%d-%d-%d",d.day,d.month,d.year);
	ptr->day=10;
	ptr->month=12;
	ptr->year=2019;
	printf("\n%d-%d-%d\n", ptr->day,ptr->month,ptr->year);
}
void menu()
{
	date_t da;
	int ch;
	do
{
	printf("enter choice\n1.accept\n2.print\n3.init\n0.exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 0:
		break;
	case 1:
		accept_record(&da);
		break;
	case 2:
		print_record(&da);
		break;
	case 3:
		init_date(&da);
	default:
		printf("\n enter proper choice");


	}

}while(ch!=0);

}

int main( void )
{
	//date_t emp;
	//int ch;
	menu();

	/*do
	{
		printf("\nenter choice\n1.accept\n2.print\n0.exit");
		scanf("%d",&ch);
		switch(ch)
		{
		case 0:
			break;
		case 1:
			accept_record(&emp);
			break;
		case 2:
			print_record(&emp);
			break;
		default:
			printf("\n enter proper choice");


		}

	}while(ch!=0);*/


	return 0;
}
