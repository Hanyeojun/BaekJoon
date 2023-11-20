str1=input()
res=10
for i in range(len(str1)-1):
    if str1[i]==str1[i+1]:
        res+=5
    else:
        res+=10
print(res)