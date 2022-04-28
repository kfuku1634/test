# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")


def solution(A):
    # write your code in Python 3.6
    popA = []
    for i,a in enumerate(A):
        if i==0:
            popA.append(a)
        else:
            if( a == A[i-1]):
                continue
            else:
                popA.append(a)
        
    prohibit = False
    total = 0
    for i,h in enumerate(popA):
        if prohibit == True:
            prohibit = False
            continue

        if i == len(popA)-1:
            if prohibit == True:
                continue
            else:
                total+=1
            continue

        if i == 0:
            total +=1
            prohibit = True
        else:
            if ( popA[i-1] < h  and  h > popA[i+1] ):
                total +=1
                prohibit = True
            elif ( popA[i-1] > h  and  h < popA[i+1] ):
                total +=1
                prohibit = True
            else:
                continue

    print(total)

if __name__ == "__main__":
    A = input()[1:-1]
    A = list(map(int,A.split(",")))
    solution(A)
