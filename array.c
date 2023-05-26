#include <stdio.h>
#include <float.h>
#include <stdlib.h>

/*functions*/
void write(float input_array[], int length);
void sort_array(float input_array[], int length);

int main()
{
    float input_array[] = {34, 43, 3.444, 8.999, 4923904};
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
}

void write(float input_array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%f\n", input_array[i]);
    }
}

void sort_array(float input_array[], int length)
{
    float sorted_array[length], temp;

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
