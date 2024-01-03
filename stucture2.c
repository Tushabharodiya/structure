#include<stdio.h>

struct Employee{
	int emp_id;
	char emp_name[100];
	int emp_age;
	char emp_role[100];
	char emp_city[100];
	int emp_experience;
	char emp_company_name[100];	
};
void main()
{
	int i,n;
	
	printf("Enter Employee  = ");
	scanf("%d",&n);
	struct Employee s[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter Employee id = ");
		scanf("%d",&s[i].emp_id);
		printf("Enter Employee Name = ");
		scanf("%s",&s[i].emp_name);
		printf("Enter Employee Age = ");
		scanf("%d",&s[i].emp_age);	
		printf("Enter Employee Role  = ");
		scanf("%s",&s[i].emp_role);	
		printf("Enter Employee city = ");
		scanf("%s",&s[i].emp_city);	
		printf("Enter Employee Experience = ");
		scanf("%d",&s[i].emp_experience);	
		printf("Enter Employee company Name = ");
		scanf("%s",&s[i].emp_company_name);	
	}	
	
	printf("\n------------Student Details---------------\n");
	for(i=0;i<n;i++)
	{
		printf("Employee Id = %d\n",s[i].emp_id);
		printf("Employee Name = %s\n",s[i].emp_name);
		printf("Employee Age = %d\n",s[i].emp_age);
		printf("Employee Role = %s\n",s[i].emp_role);
		printf("Employee City = %s\n",s[i].emp_city);
		printf("Employee Experience = %d\n",s[i].emp_experience);
		printf("Employee company Name = %s\n",s[i].emp_company_name);
	}
}