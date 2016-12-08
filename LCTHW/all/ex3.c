#include<stdio.h>

int formatOutput(){
	char age;
	int height=170;
	printf("I am %p years old.\n",&age);
	printf("I am %03d celimeters tall.\n",height);
	int days=4323;
	printf("%3d days.\n",days);
	return 0;
}
