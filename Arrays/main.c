/*
//Question 3 - findMinMax1D
#include <stdio.h>
void findMinMax1D(int ar[], int size, int *min, int *max);
int main()
{
    int ar[40];
    int i, size;
    int min, max;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d", &ar[i]);
    findMinMax1D(ar, size, &min, &max);
    printf("min = %d; max = %d\n", min, max);
    return 0;
}
void findMinMax1D(int ar[], int size, int *min, int *max)
{
    int i, least, most;

    least = ar[0];
    most = ar[0];
    for (i=0; i<size; i++)
    {
        if (ar[i] > most)
        {
            most = ar[i];
        }
        if (ar[i] < least)
        {
            least = ar[i];
        }
    }
    *min = least;
    *max = most;
}

//Question 6 - swapMinMax1D
#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main()
{
    int ar[50],i,size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d",ar+i);
    swapMinMax1D(ar, size);
    printf("swapMinMax1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",*(ar+i));
    return 0;
}
void swapMinMax1D(int ar[], int size)
{
    int i, least, most, temp;
    int leastIndex, mostIndex;
    int *ptrmost, *ptrleast;

    least = ar[0];
    most = ar[0];
    for (i=0; i<size; i++)
    {
        if (ar[i] >= most)
        {
            most = ar[i];
            mostIndex = i;
        }
        if (ar[i] <= least)
        {
            least = ar[i];
            leastIndex = i;
        }
    }
    ptrmost = &ar[mostIndex];
    ptrleast = &ar[leastIndex];
    temp = *ptrmost;
    *ptrmost = *ptrleast;
    *ptrleast = temp;
}


//Question 8 - computeTotal2D
#include <stdio.h>
#define SIZE 4
void computeTotal2D(int matrix[SIZE][SIZE]);
int main()
{
    int a[SIZE][SIZE];
    int i,j;
    printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
    for (i=0; i<SIZE; i++)
        for (j=0; j<SIZE; j++)
            scanf("%d", &a[i][j]);
    printf("computeTotal2D(): \n");
    computeTotal2D(a);
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
void computeTotal2D(int matrix[SIZE][SIZE])
{
    int i, sum;

    for (i=0; i<SIZE; i++)
    {
        sum = matrix[i][0] + matrix[i][1] + matrix[i][2];
        matrix[i][3] = sum;
    }
}


//Question 10 - symmetry2D
#include <stdio.h>
#define SIZE 10
#define INIT_VALUE 999
int symmetry2D(int M[][SIZE], int rowSize, int colSize);
int main()
{
    int M[SIZE][SIZE],i,j, result = INIT_VALUE;
    int rowSize, colSize;

    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &M[i][j]);
    result=symmetry2D(M, rowSize, colSize);
    if (result == 1)
        printf("symmetry2D(): Yes\n");
    else if (result == 0)
        printf("symmetry2D(): No\n");
    else
        printf("Error\n");
    return 0;
}
int symmetry2D(int M[][SIZE], int rowSize, int colSize)
{
    int i, j, checker = 1;

    for (i=0; i < rowSize; i++)
    {
        for (j=0; j < colSize; j++)
        {
          if (M[i][j] != M[j][i])
          {
              checker = 0;
              return checker;
          }
        }
    }
    return checker;
}


//Question 4 - specialNumbers1D
#include <stdio.h>
void specialNumbers1D(int ar[], int num, int *size);
int main()
{
    int a[20],i,size=0,num;

    printf("Enter a number (between 100 and 999): \n");
    scanf("%d", &num);
    specialNumbers1D(a, num, &size);
    printf("specialNumbers1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",a[i]);
    return 0;
}
void specialNumbers1D(int ar[], int num, int *size)
{
    int i, j=0, b, c, d, temp;
    temp = i;

    for (i=100; i<=num; i++)
    {
        b=0; c=0; d=0;
        b = i%10; c = i%10; d = i%10;
        if (b*b*b+c*c*c+d*d*d == temp)
        {
            ar[j] = temp;
            j++;
        }
    }
}
*/

//Question 11 - Compress 2D
#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()
{
    int data[SIZE][SIZE];
    int i,j;
    int rowSize, colSize;

    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &data[i][j]);
    printf("compress2D(): \n");
    compress2D(data, rowSize, colSize);
    return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
    int i, count;



    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}


 for (l=0;l<SIZE1;l++){


        for(j = 0; j < SIZE2; j++)
        {
            count = 0;
            printf("\n");


            for(k = 0; k < SIZE2; k++)
            {
                count++;


                if (k == SIZE2-1 || data[j][k] != data[j][k+1])
                {
                    printf("%c %d ", data[j][k], count);
                    count = 0;
                }
            }
        }
    }
