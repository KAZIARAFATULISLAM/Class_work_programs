#include<stdio.h>
#include<conio.h>
int main()
{


int x = 1, y = 2, z[10];
int *ip;		/* ip is a pointer to an int */

int ip = &x;		/* ip points to (contains the memory address of) x */
int y = *ip;		/* y is now 1, indirectly copied from x using ip */
int*ip = 0;		/* x is now 0 */
ip = &z[5];	/* ip now points to z[5] */

}

