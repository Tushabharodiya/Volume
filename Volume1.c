#include<stdio.h>
struct distances{
	int inch;
	int fit;
	
};
void main()
{
	struct distances s;
	int h1, h2,f1,f2;
	printf("Enter first Value: \n");
	
	printf("Enter inch value = ");
	scanf("%d",&h1);
	printf("Enter Feet value = ");
	scanf("%d",&f1);
	
	printf("Enter Second Value: \n");
	printf("Enter inch value = ");
	scanf("%d",&h2);
	printf("Enter Feet value = ");
	scanf("%d",&f2);
	
	s.inch=h1+h2;
	s.fit=f1+f2;
	
	while(s.inch>=12)
	{	
		if(s.inch>12)
		{
			s.inch=s.inch-12;
			s.fit++;
		}	
	}

	printf("inch = %d\n",s.inch);
	printf("Feet = %d\n",s.fit);
	
	
}