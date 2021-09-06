# function for verifying if a multi-dimensional array is a luoshu square
def verify_luoshu(l):
    sums = [] 
    [sums.append(0) for x in range(0, len(l)+2)]  
    c = 2
    d = 0
    for row in l:
        sums[0]+=row[d]
        sums[1]+=row[(d*(-1))-1]
        for element in row:
            sums[c] += element
        c+=1
        d+=1
    for s in range(1, len(sums)):
        if(sums[s-1] != sums[s]):
            return False
    return True
