n = int(input())
chang, sang = 100, 100
for i in range(0, n):
    x, y = map(int, input().split())
    if x>y:
        sang-=x
    elif y>x:
        chang-=y
    else :
        continue
print(chang,sang,sep='\n')