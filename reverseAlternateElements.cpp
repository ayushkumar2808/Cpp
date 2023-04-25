#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {

        while (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int even[8] = {5, 4, 8, 9, 6, 5, 4, 10};

    swapAlternate(even, 8);
    printArray(even, 8);

    cout << "done";
}