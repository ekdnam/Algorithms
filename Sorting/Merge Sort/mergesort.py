def merge(llist, rlist):
    final = []
    while llist or rlist:
            
        if len(llist) and len(rlist):
            if llist[0] < rlist[0]:
                final.append(llist.pop(0))
            else:
                final.append(rlist.pop(0))            
        
        if not len(llist):
            if len(rlist): 
                final.append(rlist.pop(0))

        if not len(rlist):
            if len(llist):
                final.append(llist.pop(0))

    return final

def merge_sort(list):
    if len(list) < 2: 
        return list
    mid = (int)(len(list) / 2)
    return merge(merge_sort(list[:mid]), merge_sort(list[mid:]))

if __name__=="__main__":
    import sys
    textfile = open(sys.argv[1], 'r')
    array = []
    for line in textfile.readlines():
        array.append(int(line))
    print(array)
    array = merge_sort(array)
    print(array)