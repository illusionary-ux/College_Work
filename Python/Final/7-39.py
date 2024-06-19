from math import pow
n = int(input())
tot = 0
for i in range(1,n+1):
    tot += pow(-1,i+1) * i
print(f"{tot:.0f}")