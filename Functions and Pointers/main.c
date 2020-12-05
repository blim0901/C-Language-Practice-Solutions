
//Question 1 - computePay
#include <stdio.h>
double computePay1(int noOfHours, int payRate);
void computePay2(int noOfHours, int payRate, double *grossPay);
int main()
{
    int noOfHours, payRate;
    double grossPay;

    printf("Enter number of hours: \n");
    scanf("%d", &noOfHours);
    printf("Enter hourly pay rate: \n");
    scanf("%d", &payRate);
    printf("computePay1(): %.2f\n", computePay1(noOfHours, payRate));
    computePay2(noOfHours, payRate, &grossPay);
    printf("computePay2(): %.2f\n", grossPay);
    return 0;
}
double computePay1(int noOfHours, int payRate)
{
    int excess;
    int finalPay;

    if (noOfHours <= 160)
    {
        finalPay = noOfHours*payRate;
    }
    else
    {
        excess = noOfHours - 160;
        finalPay = (160)*(payRate) + (excess)*(payRate*1.5);
    }
    return finalPay;
}
void computePay2(int noOfHours, int payRate, double *grossPay)
{
    int excess;
    int finalPay;

    if (noOfHours <= 160)
    {
        finalPay = noOfHours*payRate;
    }
    else
    {
        excess = noOfHours - 160;
        finalPay = (160)*(payRate) + (excess)*(payRate*1.5);
    }

    *grossPay = finalPay;
}

//Question 11 - reverseDigits
#include <stdio.h>
int reverseDigits1(int num);
void reverseDigits2(int num, int *result);
int main()
{
    int num, result=999;

    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("reverseDigits1(): %d\n", reverseDigits1(num));
    reverseDigits2(num, &result);
    printf("reverseDigits2(): %d\n", result);
    return 0;
}

int reverseDigits1(int num)
{
    int rev=0, x;
    while(num != 0)
    {
        x = num % 10;
        rev = rev*10 + x;
        num /= 10;
    }
    return rev;
}
void reverseDigits2(int num, int *result)
{
    int rev=0, x;
    while(num != 0)
    {
        x = num % 10;
        rev = rev*10 + x;
        num /= 10;
    }
    *result = rev;
}



//Question 3 - sumSqDigits
#include <stdio.h>
int sumSqDigits1(int num);
void sumSqDigits2(int num, int *result);
int main()
{
    int num, result;

    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
    sumSqDigits2(num, &result);
    printf("sumSqDigits2(): %d\n", result);
    return 0;
}
int sumSqDigits1(int num)
{
    int i, sum, length=0;
    for (sum = 0; num > 0; sum += (num % 10)*(num % 10), num /= 10);
    return sum;
}
void sumSqDigits2(int num, int *result)
{
    int i, sum, length=0;
    for (sum = 0; num > 0; sum += (num % 10)*(num % 10), num /= 10);
    *result = sum;
}


//Question 7 - power
#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
    int power;
    float number, result=-1;

    printf("Enter the number and power: \n");
    scanf("%f %d", &number, &power);
    printf("power1(): %.2f\n", power1(number, power));
    power2(number,power,&result);
    printf("power2(): %.2f\n", result);
    return 0;
}
float power1(float num, int p)
{
    float ans;
    ans = 1;

    while (p != 0) {
        if (p > 0)
        {
            ans *= num;
            --p;
        }
        else if (p < 0)
        {
            ans = ans * 1/num;
            ++p;
        }

    }

    return ans;
}

void power2(float num, int p, float *result)
{
    double ans;
    ans = 1;

    while (p != 0) {
        if (p > 0)
        {
            ans *= num;
            --p;
        }
        else if (p < 0)
        {
            ans = ans * 1/num;
            ++p;
        }

    }

    *result = ans;
}

