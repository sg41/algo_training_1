digits = list(map(int, input().split()))
d1 = digits[0]
d2 = digits[1]

if len(digits) > 2:
    product = d1*d2
    for i in range(2, len(digits)):
        v1 = d1*digits[i]
        v2 = d2*digits[i]
        if v1 > product and v1 > v2:
            product = v1
            d2 = digits[i]
        elif v2 > product and v2 > v1:
            product = v2
            d1 = digits[i]

print(d1, d2) if d1 < d2 else print(d2, d1)
