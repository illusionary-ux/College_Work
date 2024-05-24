def CountDigit(number,digit):
    lst = list(str(number))
    cnt = 0
    for i in lst:
        if str(digit) == i:
            cnt+=1
    return cnt


number,digit=input().split()
number=int(number)
digit=int(digit)
count=CountDigit(number,digit )
print("Number of digit 2 in "+str(number)+":",count)