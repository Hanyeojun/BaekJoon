x,y = map(int,input().split())
basket = [i+1 for i in range(0, x)]
for i in range(0,y):
    s,e,m = map(int,input().split())
    basket = basket[:s-1]+basket[m-1:e]+basket[s-1:m-1]+basket[e:]
for j in basket:
    print(j,end=' ')