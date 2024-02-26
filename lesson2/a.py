str = input().split()
for i in range(len(str)-1):
    if str[i] > str[i+1]:
        print("NO")
        break
else:
    print("YES")
