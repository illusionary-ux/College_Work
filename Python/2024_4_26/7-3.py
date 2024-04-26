tot,x = map(float,input().split())
if tot <= 50:
    cost = 0.53*tot
else:
    cost = 0.53*50 + (0.53+x)*(tot-50)
print('cost = %.2f' % (cost))