def insertion_sort(list):
 
    if len(list) <= 1:
        return list

    for i in range(1, len(list)): 
        j = i - 1
        key = list[i]
        
        while j >= 0 and key < list[j]: 
            list[j + 1] = list[j] 
            j = j - 1 
            list[j + 1] = key 
 
    return list 

if __name__=="__main__":
    import sys
    textfile = open(sys.argv[1], 'r')
    array = []
    for line in textfile.readlines():
        array.append(int(line))
    print(array)
    array = insertion_sort(array)
    print(array) 