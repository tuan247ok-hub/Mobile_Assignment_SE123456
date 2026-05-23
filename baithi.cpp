#include <stdio.h>

struct Car
{
    int ModelId;
    char CarName[50];
    int ProductionYear;
};

float velocity(float v0, float a, float t)
{
    return v0 + a * t;
}

void inputArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void inputCars(struct Car cars[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter ModelId: ");
        scanf("%d", &cars[i].ModelId);

        printf("Enter Car Name: ");
        scanf("%s", cars[i].CarName);

        printf("Enter Production Year: ");
        scanf("%d", &cars[i].ProductionYear);
    }
}

void displayCars(struct Car cars[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d %s %d\n",
        cars[i].ModelId,
        cars[i].CarName,
        cars[i].ProductionYear);
    }
}

int main()
{
    // Question 1
    float v = velocity(3,2,10);

    printf("The car moving with velocity : %.2f\n", v);

    float t;

    printf("Enter t: ");
    scanf("%f", &t);

    v = velocity(3,2,t);

    if(v < 100)
    {
        printf("Safe, the car is moving normally\n");
    }
    else
    {
        printf("Dangerous, the car is exceeding the speed limit\n");
    }

    // Question 2
    int arr[7] = {3,5,8,13,21,34,55};

    for(int i = 0; i < 7; i++)
    {
        printf("The element %d of the array is %d\n", i+1, arr[i]);
    }

    // Question 3
    struct Car cars[5];

    inputCars(cars, 5);

    displayCars(cars, 5);

    return 0;
}
