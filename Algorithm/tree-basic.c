#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

typedef struct Treebasic
{
	int date;
	struct Treebasic *lchlid;
	struct Treebasic *rchlid;

}BiTnode, *BiTree;
