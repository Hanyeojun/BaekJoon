x, y = map(int, input().split())
a = min(x, y)
b = max(x, y)
cnt = b - a - 1
if b - a <= 1:
    cnt = 0
print(cnt)
for i in range(a+1, b):
    print(i, end=" ")