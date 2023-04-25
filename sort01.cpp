#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortone(int arr[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
int main()
{
    int arr[9] = {0, 0, 1, 0, 1, 0, 1, 0, 1};
    sortone(arr, 9);
    printarray(arr, 9);
}