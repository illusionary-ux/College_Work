def is_palindrome(x):
    flag = 1
    for i in range(0,len(x)):
        if x[i] != x[len(x)-1-i]:
            flag = 0
    if flag:
        return 'Yes'
    else:
        return 'No'

x = input()
print(is_palindrome(x))