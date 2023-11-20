tc = int(input())
for i in range(0, tc):
    maxx = 0
    school = ""
    cnt = int(input())
    for j in range(0, cnt):
        tname, tnum = input().split()
        tnum = int(tnum)
        if(tnum>maxx):
            maxx=tnum
            school = tname
    print(school)