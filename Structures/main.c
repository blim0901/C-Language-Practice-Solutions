
//Question 1 - findMiddleAge
#include <stdio.h>
typedef struct {
    char name[20];
    int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p);
int main()
{
    Person man[3], middle;

    readData(man);
    middle = findMiddleAge(man);
    printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
    return 0;
}
void readData(Person *p)
{
    int i;

    for (i=0;i<3;i++)
    {
        printf("Enter person %d\n", (i+1));
        scanf("%s %d", (p+i)->name, &(p+i)->age);
        fflush(stdin);
    }
}
Person findMiddleAge(Person *p)
{
    int index;

    if (((p+1)->age>(p+0)->age && (p+0)->age>(p+2)->age)|| ((p+2)->age>(p+0)->age && (p+0)->age>(p+1)->age))
    {
        index = 0;
    }

    if (((p+0)->age>(p+1)->age && (p+1)->age>(p+2)->age)|| ((p+2)->age>(p+1)->age && (p+1)->age>(p+0)->age))
    {
        index = 1;
    }

    if (((p+0)->age>(p+2)->age && (p+2)->age>(p+1)->age)|| ((p+1)->age>(p+2)->age && (p+2)->age>(p+0)->age))
    {
        index = 2;
    }

    return *(p+index);
}



//Question 4 - encodeChar
#include <stdio.h>
#include <string.h>
typedef struct {
    char source;
    char code;
} Rule;
void createTable(Rule *table, int *size);
void printTable(Rule *table, int size);
void encodeChar(Rule *table, int size, char *s, char *t);
int main()
{
    char s[80], t[80], dummychar, *p;
    int size, choice;
    Rule table[100];

    printf("Select one of the following options:\n");
    printf("1: createTable()\n");
    printf("2: printTable()\n");
    printf("3: encodeChar()\n");
    printf("4: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("createTable(): \n");
                createTable(table, &size);
                break;
            case 2:
                printf("printTable(): \n");
                printTable(table, size);
                break;
            case 3:
                scanf("%c",&dummychar);
                printf("Source string: \n");
                fgets(s, 80, stdin);
                if (p=strchr(s,'\n')) *p = '\0';
                encodeChar(table,size,s,t);
                printf("Encoded string: %s\n", t);
                break;
            default:
                break;
    }
    } while (choice < 4);
    return 0;
}
void printTable(Rule *table, int size)
{
    int i;

    for (i=0; i<size; i++)
    {
        printf("%d: %c->%c\n", i+1, table->source, table->code);
        table++;
    }
}
void createTable(Rule *table, int *size)
{
    int i;
    printf("Enter number of rules: \n");
    scanf("%d", size);

    for (i=1; i<=*size; i++)
    {
        printf("Enter rule %d: \n", i);
        printf("Enter source character: \n");
        scanf(" %c", &table->source);
        printf("Enter code character: \n");
        scanf(" %c", &table->code);
        table++;
    }



}
void encodeChar(Rule *table, int size, char *s, char *t)
{
    int count = 0;
    int i, j;
    Rule *new = table;

    for (i=0; i<strlen(s); i++)
    {
        for (j=1; j<=size; j++)
        {
            if (s[i] == table->source)
            {
                t[i] = table->code;
                break;
            }

            else if (j == size)
            {
                t[i] = s[i];
            }
            table++;
        }
        table = new;
    }
}



//Question 6 - customer
#include <stdio.h>
#include <string.h>
struct account {
    struct
    {
        char lastName[10];
        char firstName[10];
    } names ;
    int accountNum;
    double balance;
};
void nextCustomer(struct account *acct);
void printCustomer(struct account acct);

int main()
{
    struct account record;
    int flag = 0;
    do {
        nextCustomer(&record);
        if ((strcmp(record.names.firstName, "End") == 0) &&
            (strcmp(record.names.lastName, "Customer") == 0))
            flag = 1;
        if (flag != 1)
            printCustomer(record);
    } while (flag != 1);
}

void nextCustomer(struct account *acct)
{
    printf("Enter names (firstName lastName): \n");
    scanf("%s %s", acct->names.firstName, acct->names.lastName);
    if ((strcmp(acct->names.firstName, "End") != 0) ||
            (strcmp(acct->names.lastName, "Customer") != 0)){
        printf("Enter account number: \n");
        scanf("%d", &acct->accountNum);
        printf("Enter balance: \n");
        scanf("%lf", &acct->balance);
    }
}
void printCustomer(struct account acct)
{
    printf("Customer record: \n");
    printf("%s %s %d %.2f \n", acct.names.firstName, acct.names.lastName, acct.accountNum, acct.balance);
}


