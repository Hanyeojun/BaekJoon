t=int(input())
quadrant=[0,0,0,0,0]
for i in range(t):
    x, y = map(int, input().split())
    if (x==0 or y==0) :
        quadrant[4]+=1
    elif (x>0 and y>0):
        quadrant[0]+=1
    elif (x<0 and y>0):
        quadrant[1]+=1
    elif (x<0 and y<0):
        quadrant[2]+=1
    elif (x>0 and y<0):
        quadrant[3]+=1
print("Q1:",quadrant[0])
print("Q2:",quadrant[1])
print("Q3:",quadrant[2])
print("Q4:",quadrant[3])
print("AXIS:",quadrant[4])