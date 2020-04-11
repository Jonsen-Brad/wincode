#分糖果
n=input()
n=int(n)
a=[0]*100
for i in range(0,n):
    a[i]=input()

mi=3
for i in range(0,n):
    mi=int(a[i])
    for j in range(i,n):
        if int(mi) > int(a[j]):
            mi=a[j]
            a[j]=a[i]
            a[i]=mi

for i in range(0,n):
    print(a[i])
