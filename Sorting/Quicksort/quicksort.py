def partition(array, start, end):
    pivot = array[end]
    bottom = start-1
    top = end

    done = 0
    while not done:

        while not done:
            bottom = bottom + 1

            if bottom == top:
                done = 1
                break

            if array[bottom] > pivot:
                array[top] = array[bottom]
                break

        while not done:
            top = top-1

            if top == bottom:
                done = 1
                break

            if array[top] < pivot:
                array[bottom] = array[top]
                break

    array[top] = pivot
    return top

def quicksort(array, start, end):
    if start < end:
        split = partition(array, start, end)
        quicksort(array, start, split-1)
        quicksort(array, split+1, end)
    else:
        return

if __name__=="__main__":
    import sys
    textfile = open(sys.argv[1], 'r')
    array = []
    for line in textfile.readlines():
        array.append(int(line))
    print(array)
    start = 0
    end = len(array)-1
    quicksort(array,start,end)
    print(array)