n = int(input())
fn = 0.0
for i in range(1,n+1):
    fn += i/(i+1)
print("%.4f" % fn)