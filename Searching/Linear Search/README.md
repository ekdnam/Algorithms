# **Linear Search** 

-> Linear search is a very simple search algorithm. In this type of search, a sequential search is made over all items one by one. Every item is checked and if a match is found then that particular item is returned, otherwise the search continues till the end of the data collection. This algorithm work on Linear Data structures such as Arrays.


## _EXAMPLE for linear search_

For example :- we are searching for number **_33_** in the given array. we will begin searching number  **_33_**  from starting of the given array till end.and As soon as we find  first number  **_33_** in array we stop searching further in the array.

![](https://www.tutorialspoint.com/data_structures_algorithms/images/linear_search.gif)


# **Simple algorithm for linear search**

Linear Search ( Array A, Value x)

**Step 1**: Set i to 1

**Step 2**: if i > n then go to step 7

**Step 3**: if A[i] = x then go to step 6

**Step 4**: Set i to i + 1

**Step 5**: Go to Step 2

**Step 6**: Print Element x Found at index i and go   to  step 8

**Step 7**: Print element not found

**Step 8**: Exit




# **Pseudo code for Linear search**

    procedure linear_search (list, value)
        for each item in the list
            if match item == value
                return the item's location
            end if
         end for
    end procedure
