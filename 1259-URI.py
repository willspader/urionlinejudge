def mergeSort(alist):
    if len(alist)>1:
        mid = len(alist)//2
        lefthalf = alist[:mid]
        righthalf = alist[mid:]

        mergeSort(lefthalf)
        mergeSort(righthalf)

        i=0
        j=0
        k=0
        while i < len(lefthalf) and j < len(righthalf):
            if lefthalf[i] < righthalf[j]:
                alist[k]=lefthalf[i]
                i=i+1
            else:
                alist[k]=righthalf[j]
                j=j+1
            k=k+1

        while i < len(lefthalf):
            alist[k]=lefthalf[i]
            i=i+1
            k=k+1

        while j < len(righthalf):
            alist[k]=righthalf[j]
            j=j+1
            k=k+1

def mergeSortImpar(ilist):
    if len(ilist)>1:
        mid = len(ilist)//2
        lefthalf = ilist[:mid]
        righthalf = ilist[mid:]

        mergeSortImpar(lefthalf)
        mergeSortImpar(righthalf)

        i=0
        j=0
        k=0
        while i < len(lefthalf) and j < len(righthalf):
            if lefthalf[i] > righthalf[j]:
                ilist[k]=lefthalf[i]
                i=i+1
            else:
                ilist[k]=righthalf[j]
                j=j+1
            k=k+1

        while i < len(lefthalf):
            ilist[k]=lefthalf[i]
            i=i+1
            k=k+1

        while j < len(righthalf):
            ilist[k]=righthalf[j]
            j=j+1
            k=k+1

def main():
    n = int(input())

    par = []
    impar = []

    for i in range(n):
        num = int(input())
        if num % 2 == 0:
            par.append(num)
        else:
            impar.append(num)

    mergeSort(par)
    mergeSortImpar(impar)

    par.extend(impar)
    for n in par:
        print(n)

main()
