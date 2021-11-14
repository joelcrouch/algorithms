#include <cstring>
#include <iostream>
#include <cctype>

using namespace std;

//linear and binary search functions:  given an array, find an item in the array return the index?

int linearSearch(int array[], int toFind){
    int size=(sizeof(array))/(sizeof(array[0]));
    for(int i=0;i<size;i++){
        if(array[i]==toFind)
            return i;
    }
    return -1;//frr failure
}//time complexity for linear search is O(n), however the array need not be sorted

int binarySearch(int array[], int left, int right, int toFind){
//given a sorted (low -high) array find an int 
    if(right >= 1){
        int middle = left + (right - 1) /2;
        if(array[middle]==toFind){
            return middle;
        }
        if(array[middle] > toFind){
            return binarySearch(array, left, middle-1, toFind);//search lower half
        }
        return binarySearch(array, middle + 1, right, toFind);//search higher half
    }
    return -1;//not in array 
}
//time complexity:  T(n)= T(n/2)+c