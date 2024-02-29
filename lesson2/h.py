digits = sorted(list(map(int, input().split())))
v1 = digits[0]*digits[1]*digits[-1]
v2 = digits[-1]*digits[-2]*digits[-3]
print(digits[0], digits[1], digits[-1]
      ) if v1 > v2 else print(digits[-1], digits[-2], digits[-3])
