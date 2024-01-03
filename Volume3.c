#include<stdio.h>
enum day{
	mon,tue,wed,thu=12,fri,sat,sun
};
main()
{

	
	printf("monday = %d\n",mon);
	printf("Tuesday = %d\n",tue);
	printf("Wednesday = %d\n",wed);
	printf("Thursday = %d\n",thu);
	printf("Friday = %d\n",fri);
	printf("Saturday = %d\n",sat);
	printf("Sunday = %d\n",sun);
}