number = set(map(int,input().split()))
sig = [num for num in number if num % 2 == 1]
dob = [num for num in number if num % 2 == 0]
sig.sort()
dob.sort()
for i in sig:
    print(i,end=' ')
for j in dob:
    if j not in sig:
        print(j,end=" ")