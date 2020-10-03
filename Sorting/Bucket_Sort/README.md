# Bucket Sort Algorithm

Usually, the best algorithm we have when using comparison based algorithms(which compares elements pairwise) is Merge Sort which takes about $O(nlog(n))$. 

However if we know something about the data, then we can do sorting even faster.

Bucket Sort is such an algorithm.

Steps for Bucket Sort:
* First Bucket Sort splits the elements of the array into different buckets. 

    ```
    Eg : If we have an array [1, 3, 3, 8, 5] and our bucket condition is:
    " <= 3", then we will have the following buckets.

    Bucket 1 (element <= 3) : [1, 3, 3]
    Bucket 2 (element > 3) : [8, 5]
    ```

* Then it sorts the **buckets** individually.(Usually, insertion sort is used).
* Finally it merges the buckets one by one, starting with the bucket with the smalles values(So that in one linear pass, the array can be merged)

This allows the algorithm to achieve $O(n)$ run time.

Sources:

* [Wikipedia](https://en.wikipedia.org/wiki/Bucket_sort)

### Contributed by Sandip Dutta



