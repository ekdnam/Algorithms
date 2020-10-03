def bubble_sort(list):
    for passnum in range(len(list)-1,0,-1):
        for i in range(passnum):
            if list[i] > list[i+1]:
                temp = list[i]
                list[i] = list[i+1]
                list[i+1] = temp

if __name__=="__main__":
    import sys
    textfile = open(sys.argv[1], 'r')
    array = []
    for line in textfile.readlines():
        array.append(int(line))
    print(array)
    bubble_sort(array)
    print(array) 