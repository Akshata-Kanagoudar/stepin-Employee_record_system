#include <stdio.h>
#include "record.h"
char * arrr = "C:\\Users\\Akshata\\file4.txt";

FILE *fp, *fp1;


void main()
{
    int i, n, ch;

    printf("1] Create a Record\n");
    printf("2] Display Records\n");
    printf("3] Update Records\n");
    printf("4] Exit");
    while (1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            fp = fopen(arrr, "a");
            create();
            break;
        case 2:
            fp1 = fopen(arrr,"rb");
            display();
            break;
        case 3:
            fp1 = fopen(arrr, "r+");
            update();
            break;
        case 4:
            exit(0);
        }
    }
}