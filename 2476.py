t=int(input())
maxx=0
for i in range(0,t):
    n1, n2, n3 = map(int, input().split())
    if n1==n2==n3:
        tmp=10000+n1*1000
        maxx=max(maxx,tmp)
    elif n1==n2:
        tmp=1000+n1*100
        maxx=max(maxx,tmp)
    elif n2==n3:
        tmp=1000+n2*100
        maxx=max(maxx,tmp)
    elif n1==n3:
        tmp=1000+n3*100
        maxx=max(maxx,tmp)
    else:
        tmp=max(n1,n2,n3)*100
        maxx=max(maxx,tmp)
print(maxx)