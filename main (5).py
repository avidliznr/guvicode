num = int(input())
flag = True
for d in range(2,num//2):
    if num%d == 0:
        flag = False

if flag:
    print("yes")
else:
    print("no")