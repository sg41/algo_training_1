d = float(input())
n = 0
type = -1
constant = 0
ascending = 0
descending = 0
while d != -2*1e9:
    d1 = float(input())
    if d1 == -2*1e9:
        break
    if d == d1:
        constant += 1
    elif d < d1:
        ascending += 1
    elif d > d1:
        descending += 1
    n += 1
    d = d1
if constant == n:
    print("CONSTANT")
elif ascending == n:
    print("ASCENDING")
elif descending == n:
    print("DESCENDING")
elif ascending == 0 and descending+constant == n:
    print("WEAKLY DESCENDING")
elif descending == 0 and ascending+constant == n:
    print("WEAKLY ASCENDING")
else:
    print("RANDOM")
