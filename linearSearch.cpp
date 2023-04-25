#include <iostream>
using namespace std;

bool search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[1000];
    int size;
    cin >> size;
    int n;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the element to search" << endl;
    cin >> n;
    bool found = search(arr, size, n);
    if (found)
    {
        cout << "present";
    }
    else
    {
        cout << "not present";
    }
}