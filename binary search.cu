/*
Given that one has a sorted array of elements, one can search the array for the
linear ( o(n)),-check each item, or do a binary search using the "binary search algorithm".
Essentially, you check the midpt.  If it mathces, you are done. Otherwise, if the search 
item is smaller than what is at the midpt. of the array, you check the midpt of the array
"smaller" than the midpt.  The original midpt becomes the end.  
IF the searched for item is bigger than the original midpt, you make the original midpt
the beginning of a new array, and continue the search similarily.
For example, say you have int array[12]={1,2,3,4,5,6,7,8,9,10,11,12}, and you want to find 9. 
6=midpt.  Is (search item)9 == mdpt.?  No.  
          Is (search item)9 < mdpt.?  NO. 
          Then call the recursive function with the new array[midpt+1, original end]
          Find the midpt and compare.  The new array is array#2{7,8,9,10,11,12}
*/
using namespace std;
#include <iostream>

int find_midpt(int  * array, int to_find)
{

}

int iter_bin_search(int arr[], int to_find)
{
    int size =(sizeof(arr))/sizeof(arr[0]);
    for(int i=0; i<size; i++){
        if(to_find==arr[i]) 
        return i;
    }
    return -1;//for no match
}
bool binary_search(int * array, int to_find)
{
    int midpt=find_midpt(array, to_find);
    //compare to_find with the middle element
    if(to_find == midpt){
        return true;
    }
    else if(to_find < midpt){
        copy(array, array#2);
        return binary_search(array#2, to_find);
    }
    else 
}

int main()
{
    int array[8]={12, 23, 28, 30,34,56,57,78};
    int search=23;
    int result=iter_bin_search(array, search);
    if(result >= 0){
        cout<<"The element is at "<<result<<"th position.\n";
    }
    else {
        cout<<search<<"  is not in the array\n";

    }
    return 0;
}