#include<stdio.h>
int main()
{
	int max,a,b;
	char max_letter;
	printf("enter a?");
	scanf("%d",&a);
	printf("enter b?");
	scanf("%d",&b);
	max=a;
	max_letter='a';
	if(max<b){
		max=b;
		max_letter='b';	
	}
	printf("a=%d,b=%d\n",a,b);
	printf("max of %d and %d is %d : is a value of '%c'",a,b,max,max_letter);
	return 0;
}
