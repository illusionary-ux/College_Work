n = int(input())
cnt = 0
sum = 0
while n > 0:
    sum += n % 10
    cnt+=1
    n //= 10
print(cnt,sum)
'''
n = int(input())
lst = [int(i) for i in str(n)]
print(len(lst),sum(lst))
'''