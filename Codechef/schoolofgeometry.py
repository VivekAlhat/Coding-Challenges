t=int(input())
while(t>0):
    l=[]
    n=int(input())
    w=list(map(int, input().rstrip().split()))
    k=list(map(int, input().rstrip().split()))
    w.sort()
    k.sort()
    for i in range(n):
        if(w[i]<k[i]):
            l.append(w[i])
        else:
            l.append(k[i])
    s=sum(l[0:n])
    print(s)
    t=t-1
