import random
import time
import bisect
random_numbers = random.sample(range(100000), 100000)
random_numbers = list(map(str,random_numbers))

def insort(s):
    A = []
    for a in list(map(int,s.split())):
        bisect.insort(A,a)
    print(A)

def input_sort(s):
    A = list(map(int,s.split()))
    
start = time.perf_counter()
insort(" ".join(random_numbers))
end = time.perf_counter()
print(end-start)

start = time.perf_counter()
input_sort(" ".join(random_numbers))
end = time.perf_counter()
print(end-start)
