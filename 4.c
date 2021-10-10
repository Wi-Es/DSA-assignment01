#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}
void selectionSort(int arr[], int n)
{
    int min;

    for (int i = 0; i < n - 1; i++)
    {

        min = i;

        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;
        swap(&arr[min], &arr[i]);
    }
}

int main()
{
    int n = 50000;
    int test = 4;
    printf("Press-1 for sorted data or press2 for random data :\n");
    int val;
    scanf("%d", &val);

    int time1[10], time2[10];
    if (val == 2)
    {
        while (test--)
        {
            int arr1[n], arr2[n];
            for (int i = 0; i < n; i++)
            {
                int x = rand() % n + 1;
                arr1[i] = x;
                arr2[i] = x;
            }

            clock_t start, end;

            start = clock();
            selectionSort(arr1, n);
            end = clock();
            int t1 = end - start;

            start = clock();
            bubbleSort(arr2, n);
            end = clock();
            int t2 = end - start;
            printf("    %d         %f         %f\n", n, (double)t1 / (double)CLOCKS_PER_SEC, (double)t2 / (double)CLOCKS_PER_SEC);
            n += 50000;
        }
    }
    else if (val == 1)
    {
        while (test--)
        {
            int arr1[n], arr2[n];
            for (int i = 0; i < n; i++)
            {

                arr1[i] = i;
                arr2[i] = i;
            }

            clock_t start, end;

            start = clock();
            selectionSort(arr1, n);
            end = clock();
            int t1 = end - start;

            start = clock();
            bubbleSort(arr2, n);
            end = clock();
            int t2 = end - start;
            printf("    %d         %f         %f\n", n, (double)t1 / (double)CLOCKS_PER_SEC, (double)t2 / (double)CLOCKS_PER_SEC);
            n += 50000;
        }
    }

    return 0;
}