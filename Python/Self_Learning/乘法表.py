'''
i = 1 
j = 1
while i <= 9:
    while j <= i:
        print(" %d * %d = %d\t" % (j, i, j * i),end = " ")
        j+=1
    j = 1
    print("\n")
    i+=1
'''
i = 1
j = 1
for i in range(1,10,1):
    for j in range(1,i+1,1):
        print(" %d * %d = %d\t" % (j, i, j * i),end = " ")
    print("\n")
    j = 1
    i+=1