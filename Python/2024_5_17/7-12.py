a = int(input())
b = int(input())
s = a + b
print(bin(a)[2:].zfill(8))
print(bin(b)[2:].zfill(8))
print('--------')
print(bin(s)[2:].zfill(8))