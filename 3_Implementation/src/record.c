#include <stdio.h>
#include <string.h>
#include "record.h"
#define size 200

extern char *arr;
extern FILE *fp,*fp1;

struct emp
{
    int id;
    char *name;
}*emp1, *emp3;
int count = 0;

/* To create an employee record */
void create()
{
    int i;
    char *p;

    emp1 = (struct emp *)malloc(sizeof(struct emp));
    emp1->name = (char *)malloc((size)*(sizeof(char)));
    printf("Enter name of employee : ");
    scanf(" %[^\n]s", emp1->name);
    printf("Enter emp id : ");
    scanf(" %d", &emp1->id);
    fwrite(&emp1->id, sizeof(emp1->id), 1, fp);
    fwrite(emp1->name, size, 1, fp);
    count++;   // count to number of entries of records
    fclose(fp);
}

/* Display the records in the file */
void display()
{
    emp3=(struct emp *)malloc(1*sizeof(struct emp));
    emp3->name=(char *)malloc(size*sizeof(char));
    int i = 1;

    if (fp1 == NULL)
        printf("\nFile not opened for reading");
    while (i <= count)
    {
        fread(&emp3->id, sizeof(emp3->id), 1, fp1);
        fread(emp3->name, size, 1, fp1);
        printf("\n%d %s",emp3->id,emp3->name);
        i++;
    }
    fclose(fp1);
    free(emp3->name);
    free(emp3);
}

void update()
{
    int id, flag = 0, i = 1;
    char s[size];

    if (fp1 == NULL)
    {
        printf("File cant be opened");
        return;
    }
    printf("Enter employee id to update : ");
    scanf("%d", &id);
    emp3 = (struct emp *)malloc(1*sizeof(struct emp));
        emp3->name=(char *)malloc(size*sizeof(char));
    while(i<=count)
    {
        fread(&emp3->id, sizeof(emp3->id), 1, fp1);
        fread(emp3->name,size,1,fp1);
        if (id == emp3->id)
        {
            printf("Enter new name of emplyee to update : ");
            scanf(" %[^\n]s", s);
            fseek(fp1, -204L, SEEK_CUR);
            fwrite(&emp3->id, sizeof(emp3->id), 1, fp1);
            fwrite(s, size, 1, fp1);
            flag = 1;
            break;
        }
        i++;
    }
    if (flag != 1)
    {
        printf("No employee record found");
        flag = 0;
    }
    fclose(fp1);
    free(emp3->name);        /* to free allocated memory */
    free(emp3);
}