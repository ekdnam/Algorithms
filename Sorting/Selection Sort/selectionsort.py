def selection_sort(list):
    for index in range(0, len(list)):
        min_index = index

        for right in range(index + 1, len(list)):
            if list[right] < list[min_index]:
                min_index = right

        list[index], list[min_index] = list[min_index], list[index]

if __name__=="__main__":
    import sys
    textfile = open(sys.argv[1], 'r')
    array = []
    for line in textfile.readlines():
        array.append(int(line))
    print(array)
    selection_sort(array)
    print(array) 