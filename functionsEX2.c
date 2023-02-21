#include <stdio.h>
#include <math.h>

int arraySize;

int sort(int nums[arraySize])
{
    int i, j, a;
    for (i = 0; i < arraySize; i++)
    {
        for (j = i + 1; j < arraySize; j++)
        {
            if (nums[i] < nums[j])
            {
                a = nums[i];
                nums[i] = nums[j];
                nums[j] = a;
            }
        }
    }
    printf("The numbers arranged in descending order are given below:\n");

    for (i = 0; i < arraySize; ++i)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}

int minNum(int nums[arraySize])
{
    int min = nums[0];
    for (int i = 1; i < arraySize; i++)
    {
        if (min > nums[i])
        {
            min = nums[i];
        }
    }
    printf("The minimum number in the array is %d\n", min);
    return 0;
}

int maxNum(int nums[arraySize])
{
    int max = nums[0];
    for (int i = 1; i < arraySize; i++)
    {
        if (max < nums[i])
        {
            max = nums[i];
        }
    }
    printf("The maximum number in the array is %d\n", max);
    return 0;
}

int avgNum(int nums[arraySize])
{
    int sum = 0;
    double avg;
    for (int i = 0; i < arraySize; i++)
    {
        sum = sum + nums[i];
    }
    avg = (float)sum / arraySize;

    return avg;
}

int stdDeviation(int nums[arraySize])
{
    double stdDev, deviation[arraySize], sumOfDeviations = 0, mean = avgNum(nums);
    int i;
    for (i = 0; i < arraySize; i++)
    {
        deviation[i] = (nums[i] - mean) * (nums[i] - mean);
        sumOfDeviations = sumOfDeviations + deviation[i];
    }
    stdDev = sqrt(sumOfDeviations / arraySize);
    printf("The standard deviation is %f\n", stdDev);
    return 0;
}

int main()
{
    int choiceOfOperation;

    printf("THIS PROGRAM TAKES AN ARRAY OF NUMBERS AND CARRIES OUT OPERATIONS ON IT.\n\nPlease choose an operation (1 -5):\n1. Sort the array in descending order\n2. Find the minimum number in the array\n3. Find the maximum number in the array\n4. Calculate the average of the array numbers\n5. Calculate the standard deviation of the numbers in the array\n");
    scanf("%d", &choiceOfOperation);

    printf("How many numbers are in the array?\n");
    scanf("%d", &arraySize);
    int array[arraySize];
    printf("\nProceed to key in your numbers\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter: ");
        scanf("%d", &array[i]);
    }

    switch (choiceOfOperation)
    {
    case 1:
        int sortArray = sort(array);
        break;
    case 2:
        int findMinimum = minNum(array);
        break;
    case 3:
        int findMaximum = maxNum(array);
        break;
    case 4:
        double avg = avgNum(array);
        printf("The average of the numbers in the array is %f\n", avg);
        break;
    case 5:
        int calculateStdDev = stdDeviation(array);
        break;
    default:
        printf("Invalid choice of operation. Please choose from 1 to 5.\n");
        break;
    }
    return 0;
}