//#include <bits/stdc++.h>
using namespace std;

//swap function required for many algorithm
void swap(int * x, int * y){
    int temp= * x;
    *x = *y;
    *y=temp;
}

int split(int array[], int low, int last)//take in array, and low, high index
{
    int pivot = array[last];
    int i=(low-1);
    for(int j=low; j<=last -1; j++){
        if(array[j]<pivot){
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i+1], &array[last]);
    return (i+1);
}   

void quicksort(int array[], int low, int last){
    if(low<last){

        int splitup=split(array, low, last);
        quicksort(array, low, splitup-1);
        quicksort(array, splitup+1, last);
    }
}

void printArray(int array[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << array[i] << " "; 
    cout << endl; 
} 

//need driver for test, maybe a print function to make it easy
int main(){
    int arr={12, 45, 99, 65, 89,34, 103, 22,21, 18, 73,88};
    int size= sizeof(arr)/sizeof(arr[0]);//size==high as well
    printArray(arr, size);//unsorted
    quicksort(arr, 0, size);
    printArray(arr, size);//sorted
    return 0;
}
