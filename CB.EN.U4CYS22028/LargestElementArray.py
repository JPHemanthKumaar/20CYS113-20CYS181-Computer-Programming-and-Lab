x = [0] * (5)

for y in range(0, 4 + 1, 1):
    print("Enter the number in index " + str(y) + " :")
    z = int(input())
    x[y] = z
v = 0
for y in range(0, 4 + 1, 1):
    if v < x[y]:
        v = x[y]
print("Greatest number:")
print(v)
