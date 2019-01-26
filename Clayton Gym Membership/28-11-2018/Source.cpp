#include<stdio.h>

typedef struct
{
	char name[40];
	int ID;
	char start[12];
	char end[12];
}Employee_t;


void main()
{
	Employee_t mgr;
	int num_employees;
	int counter;
	FILE* employeefile;
	int numinputs;

	employeefile = fopen("employee.txt", "r");

	if (employeefile == NULL)
	{
		printf("Sorry the file could not be opened\n");
	}

	else
	{
		while (!feof(employeefile))
		{
			numinputs = fscanf(employeefile, "%s %d %s %s", mgr.name, &mgr.ID, &mgr.start, &mgr.end);
			if (numinputs == 4)
			{
				printf("Name: %s, ID: %d, Date joined: %s, expiration date : %s\n", mgr.name, mgr.ID, mgr.start, mgr.end);

			}
		}

		fclose(employeefile);
	}

	printf("\n");
	printf(" ===== Clayton Leisure Centre ======\n");
	printf(" ===================================\n");
	printf("Please enter the number of people joining\n");
	scanf("%d", &num_employees);

	employeefile = fopen("employee.txt", "a");

	for (counter = 0; counter < num_employees; counter++)
	{
		printf("Please enter name, ID, Date Joined and Date Expired\n");
		scanf("%s %d %s %s", mgr.name, &(mgr.ID), mgr.start, mgr.end);
		printf("Name: %s, ID: %d, Joined: %s, Expired: %s\n", mgr.name, mgr.ID, mgr.start, mgr.end);
		if (employeefile != NULL)
		{
			fprintf(employeefile, "%s %d %s %s\n", mgr.name, mgr.ID, mgr.start, mgr.end);
		}
	}

	if (employeefile != NULL)
	{
		fclose(employeefile);
	}

}