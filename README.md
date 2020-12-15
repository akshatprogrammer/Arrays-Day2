# Arrays-Day2
In this repo, we will understand about Arrays and some simple Problem related to it.

# Whar is Array?
  * Arrays is collection of same types of data/elements.
  * It allows contiguous memory location.
  * Easy access of element by using index.
</br>

# How to declare an array?
  data_type array_name [size];</br>
  eg -> int arr[10];
 
# Initialization 
## Case 1 :
        int arr[] ={1,2,3,4,5};
## Case 2:
        int arr[5] = {1,2,3};</br>
     rest of elements will be zero.   
## Case 3:
      for(int i=0;i<n;i++)
           cin >> arr[i];
       * Run time.

# Dynamic Memory Allocation
  * Size of array can be change during runtime.
  * Free the allocated memory.
  * C defines some library functions under the library <b>stdlib.h</b></br>

### malloc()
  used to dynamically allocate single large block of memory.
  * It returns void pointer.
![diagram](https://github.com/akshatprogrammer/Arrays-Day2/blob/main/day2.svg%20-%20Google%20Chrome%2012_15_2020%208_12_20%20PM.png?raw=true)
### free()
 used to deallocate dynamically allocated memory.
 * free(p);
 
# More in this Repository ->
 * Search and delete any element from array.
 * Reverse an array.
 </br>Check them too.
