/*
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bs(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
void printarr(int arr[],int n){
    for(int i;i<n;i++){
        cout<<arr[i]<<" ";

    }
}
int main(){
    int arr[]={23,5,26,9,1,4};
    int n= sizeof arr/ sizeof arr[0];
    bs(arr,n);
    printarr(arr,n);
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void qs(int arr[], int l, int h)
{
    if(l>=h){
        return;
    }
    int i = l;
    int j = h - 1;
    int pivot = arr[h];
    while (i <= j)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] >= pivot)
        {
            j--;
        }

        if (arr[j] < arr[i] && i<j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i], &arr[h]);
    qs(arr, l, i - 1);
    qs(arr, i + 1, h);
}
void printarr(int arr[], int n)
{
    for (int i=0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {23, 5, 26, 9, 1, 4};
    int n = sizeof arr / sizeof arr[0];
    qs(arr,0,n);
    printarr(arr, n);
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
void insertionsort(int arr[], int n)
{
    int i, j, key;
    for (i = 0; i < n; i++)
    {
        key=arr[i];
        j = i - 1;
        while (arr[j] > key && j >=0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1]=key;
    }
}
void printarr(int arr[], int n)
{
    for (int i=0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {23, 5, 26, 9, 1, 4};
    int n = sizeof arr / sizeof arr[0];
    insertionsort(arr,n);
    printarr(arr, n);
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selSort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min=j;
            }
        }
        if (min != i)
            {
                swap(&arr[min], &arr[i]);
            }
    }
    
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {23, 5, 26, 9, 1, 4};
    int n = sizeof arr / sizeof arr[0];
    selSort(arr, n);
    printarr(arr, n);
    return 0;
}
*/

