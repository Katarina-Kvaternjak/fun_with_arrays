#include <stdio.h>
#include <float.h>
#include <stdlib.h>

/*functions*/
void write(int input_array[], int length);
void sort_array(int input_array[], int length);
int sum(int input_array[], int length);
int even_numbers(int input_array[], int length);

int main()
{
    int input_array[] = {34, 43, 3, 8, 13, 9};
    int length;

    length = sizeof(input_array) / sizeof(input_array[0]);

    /*printf("input array length\n");
    scanf("%d", length);
    input_array = malloc(sizeof(float) * length);
    if (input_array == NULL)
    {
        printf("exit");
        exit(0);
    }
    else
    {*/
    sort_array(input_array, length);
    printf("sum is %d \n", sum(input_array, length));
    printf("there are %d even numbers in the array \n", even_numbers(input_array, length));
    printf("there are %d odd numbers in the array \n", length - even_numbers(input_array, length));
    system("PAUSE");
}

void write(int input_array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", input_array[i]);
    }
}

void sort_array(int input_array[], int length)
{
    int sorted_array[length], temp;

    for (int i = 0; i < length; i++)
    {
        sorted_array[i] = input_array[i];
    }

    for (int i = 0; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            if (sorted_array[j] < sorted_array[i])
            {
                temp = sorted_array[i];
                sorted_array[i] = sorted_array[j];
                sorted_array[j] = temp;
            }
        }
    }

    write(sorted_array, length);
}

int sum(int input_array[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += input_array[i];
    }
    return (sum);
}

int even_numbers(int input_array[], int length)
{
    int counter = 0;
    for (int i = 0; i < length; i++)
    {
        if (input_array[i] % 2 == 0)
        {
            counter += 1;
        }
    }
    return (counter);
}
