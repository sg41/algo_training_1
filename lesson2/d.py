digits = list(map(float, input().split()))
count = 0
for i in range(1, len(digits)-1):
    if digits[i] > digits[i+1] and digits[i] > digits[i-1]:
        count += 1
print(count)
