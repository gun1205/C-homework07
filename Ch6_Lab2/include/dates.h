#include<stdio.h>
typedef struct _dates        //�s�W�@�ӵ��c"�~/��/��"
{
	int years, month, day;
}dates;

typedef struct _order
{
	char num[11];
	dates date;              //�I�s���cdates�A�éR�W��"date"
	int amount;
}order;