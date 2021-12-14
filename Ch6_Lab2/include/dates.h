#include<stdio.h>
typedef struct _dates        //新增一個結構"年/月/日"
{
	int years, month, day;
}dates;

typedef struct _order
{
	char num[11];
	dates date;              //呼叫結構dates，並命名為"date"
	int amount;
}order;