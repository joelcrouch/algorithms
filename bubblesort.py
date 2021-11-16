#given an array of integers, htis function goes through
#the array, swapping each pair to the end. 

#need a swap function-not in python!!


#need the bubble sort function it requires a boolean or other symbol a swap has occurred
#if no swap has occurred during the most recent pass, its done

def bubblesort(array):
    size=len(array);
    #go thru the array 
    for i in range(size):
        swapped =False;
        for j in range(0, size-i-1):
            #go from 0-> size-i-1.  if the element there is greater than the next,swap
            if array[j] > array[j+1] :
                array[j], array[j+1]=array[j+1], array[j]
                swapped =True #gotta go thru again
        if swapped == False:
            break # done
    return array
    
array1= [4,1, 45, 34, 39, 78, 43,10,8]
bubblesort(array1)
    
for i in range(len(array1)):
    print("%d" %array1[i], end =" ")
    
#how to run a python, for example, in cmd:  type this command "python filename.py"  (python bubblesort.py)
    
