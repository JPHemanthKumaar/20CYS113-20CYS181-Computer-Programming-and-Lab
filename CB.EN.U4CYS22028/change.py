array1 = [0] * (6)

for y in range(0, 4 + 1, 1):
    print("Enter the element at position at " + str(y))
    j = int(input())
    array1[j] = y + 1
print("Change list")
for z in range(1, 5 + 1, 1):
    print(array1[z])
