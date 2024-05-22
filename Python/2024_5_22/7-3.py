a = int(input())
op = input()
b = int(input())
if op == '/' and b == 0:
    print("divided by zero")
else:
    dic = {'+':a + b,'-':a - b,'*':a*b,'/':a/b}
    print('%.2f' % eval(str(dic[op])))