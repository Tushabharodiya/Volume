#include<stdio.h>
struct student{
	int roll_no;
	char name[100];
	int chem_marks;
	int maths_marks;
	int phy_marks;
		
};
void main()
{
	int i,n;
	struct student s[5];
	 int per,pers;
	 printf("----------Enter Students Details-----------");
		for(i=0;i<5;i++)
		{	
		printf("\nEnter Student Roll No:");
		scanf("%d",&s[i].roll_no);	
		printf("Enter Student Name:");
		scanf("%s",&s[i].name);	
		printf("Enter Student Chemistry marks:");
		scanf("%d",&s[i].chem_marks);	
		printf("Enter Student Mathematics marks:");
		scanf("%d",&s[i].maths_marks);	
		printf("Enter Student Physics marks:");
		scanf("%d",&s[i].phy_marks);
		}

		printf("\n-----------Student Details ------------\n");
		for(i=0;i<5;i++)
		{
		per= s[i].chem_marks+s[i].maths_marks+s[i].phy_marks;
		pers=per/3;
		printf("Student Roll No = %d\n",s[i].roll_no);
		printf("Student Name = %s\n",s[i].name);
		printf("Student Chemistry marks = %d\n",s[i].chem_marks);
		printf("Student Mathematics marks = %d\n",s[i].maths_marks);
		printf("Student Physics marks = %d\n",s[i].phy_marks);
		printf("Student percentage = %d%%\n\n",pers);
		}
				
}