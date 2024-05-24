a,b = map(int,input().split())
st = set()
for i in range(a,b+1):
    if i%3==0 and i%5==0 and i%7==0:
        st.add(i)
print(len(st))