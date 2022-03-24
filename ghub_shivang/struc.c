#include <stdio.h>
int main()
{
	struct student
	{
		int roll_no;
		char name[20];
		float lang1_marks;
		float maths_marks;
		float comp_marks;
		float avg;
	};
	struct student s[20];
	int i,n;
	printf("enter number of students in class\n");
	scanf("%d",&n);
	printf("enter the details of %d students\n",n);
	for(i=0;i<n;i++)
	{
		printf("enter roll number\n");
		scanf("%d",&s[i].roll_no);
		printf("enter name\n");
		scanf("%s",&s[i].name);
		printf("enter lang1_marks\n");
		scanf("%f",&s[i].lang1_marks);
		printf("enter maths_marks\n");
		scanf("%f",&s[i].maths_marks);
		printf("enter comp_marks\n");
		scanf("%f",&s[i].comp_marks);
	}
	for(i=0;i<n;i++)
	{
		s[i].avg=(s[i].lang1_marks+s[i].maths_marks+s[i].comp_marks)/3;
	}
	for(i=0;i<n;i++)
	{
		if (s[i].avg>35.0)
		{
			printf("%d\t%s\t%f\n",s[i].roll_no,s[i].name,s[i].avg);	
		}
	}

	for(i=0;i<n;i++)
	{
		if(s[i].avg<=35.0)
		{
			printf("%d\t%s\t%f\n",s[i].roll_no,s[i].name,s[i].avg);	
		}
	}

	return 0;
}
