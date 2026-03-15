#include <iostream>
void reverse(int* arr, int i, int j);

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, 0, n-1);

    for(auto i : arr) std::cout << i << std::endl;
}

void reverse(int* arr, int i, int j)
{
    if(i >= j)
        return;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    reverse(arr, i+1, j-1);
}
