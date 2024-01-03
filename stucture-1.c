#include<stdio.h>

struct student{
	int stu_id;
	char stu_name[100];
	int stu_age;
	char stu_course[100];
	char stu_city[100];
	int stu_std;
	char stu_school[100];	
};
void main()
{
	int i,n;
	
	printf("Enter student Count = ");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("Enter student id = ");
		scanf("%d",&s[i].stu_id);
		printf("Enter Student Name = ");
		scanf("%s",&s[i].stu_name);
		printf("Enter Student Age = ");
		scanf("%d",&s[i].stu_age);	
		printf("Enter Student Course = ");
		scanf("%s",&s[i].stu_course);	
		printf("Enter Student city = ");
		scanf("%s",&s[i].stu_city);	
		printf("Enter Student Std = ");
		scanf("%d",&s[i].stu_std);	
		printf("Enter Student School = ");
		scanf("%s",&s[i].stu_school);	
	}	
	
	printf("\n------------Student Details---------------\n");
	for(i=0;i<n;i++)
	{
		printf("Sudent Id = %d\n",s[i].stu_id);
		printf("Sudent Name = %s\n",s[i].stu_name);
		printf("Sudent Age = %d\n",s[i].stu_age);
		printf("Sudent Course = %s\n",s[i].stu_course);
		printf("Sudent City = %s\n",s[i].stu_city);
		printf("Sudent Stndrad = %d\n",s[i].stu_std);
		printf("Sudent School = %s\n",s[i].stu_school);
	}
}