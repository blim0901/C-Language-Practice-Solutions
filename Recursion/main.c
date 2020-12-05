
//Question 3 - rPower
#include <stdio.h>
float rPower1(float num, int p);
void rPower2(float num, int p, float *result);
int main()
{
    int power;
    float number, result;

    printf("Enter the number and power: \n");
    scanf("%f %d", &number, &power);
    printf("rPower1(): %.2f\n", rPower1(number, power));
    rPower2(number, power, &result);
    printf("rPower2(): %.2f\n", result);
    return 0;
}
float rPower1(float num, int p)
{

    if (p > 0)
    {
        return num * rPower1(num, p - 1);
    }
    else if (p < 0)
    {
        return 1 / rPower1(num, -p);
    }
    else
    {
        return 1;
    }
}

void rPower2(float num, int p, float *result)
{
    float temp;
    if (p > 0)
    {
        *result = num * rPower1(num, p - 1);
    }
    else if (p < 0)
    {
        *result = 1 / rPower1(num, -p);
    }
    else
    {
        *result = 1;
    }
}



//Question 5 - rCountEvenDigits
#include <stdio.h>
int rCountEvenDigits1(int num);
void rCountEvenDigits2(int num, int *result);
int main()
{
    int number, result;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("rCountEvenDigits1(): %d\n", rCountEvenDigits1(number));
    rCountEvenDigits2(number, &result);
    printf("rCountEvenDigits2(): %d\n", result);
    return 0;
}
int rCountEvenDigits1(int num)
{
    if (num < 10)
        if (num%2==0)
            return 1;
        else
            return 0;

    if (num%2==0)
        return 1 + rCountEvenDigits1(num/10);

    if(num%2 != 0)
        return rCountEvenDigits1(num/10);

    }

void rCountEvenDigits2(int num, int *result)
{
    if (num < 10)
        if (num%2==0)
            *result = 1;
        else
            *result = 0;

    if (num%2==0)
        *result = 1 + rCountEvenDigits1(num/10);

    if(num%2 != 0)
        *result = rCountEvenDigits1(num/10);


}



//Question 7 - rStrLen
#include <stdio.h>
int rStrLen(char *s);
int main()
{
    char str[80];

    printf("Enter the string: \n");
    gets(str);
    printf("rStrLen(): %d\n", rStrLen(str));
    return 0;
}
int rStrLen(char *s)
{
    if (*s == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + rStrLen(s + 1);
    }
}



//Question 10 - rLookupAr
#include <stdio.h>
int rLookupAr(int array[], int size, int target);
int main()
{
    int numArray[80];
    int target, i, size;
    int result=-999;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d numbers: \n", size);
    for (i=0; i < size; i++)
        scanf("%d", &numArray[i]);
    printf("Enter the target number: \n");
    scanf("%d", &target);
    result = rLookupAr(numArray, size, target);
    printf("rLookupAr(): %d", result);
    return 0;
}
int rLookupAr(int array[], int size, int target)
{
    if(size < 1)
        return -1;

    size--;
    if(array[size] == target)
        return size;

    return rLookupAr(array, size,target);
}
