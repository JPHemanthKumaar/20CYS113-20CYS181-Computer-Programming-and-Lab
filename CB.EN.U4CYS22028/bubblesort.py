print("Enter the length of the array:")
x = int(input())
array1 = [0] * (x)

for y in range(0, x - 1 + 1, 1):
    print("Enter the element:")
    z = int(input())
    array1[y] = z
for i in range(x - 1, 0 - 1, -1):
    for j in range(0, i - 1 + 1, 1):
        if array1[j] > array1[j + 1]:
            temp = array1[j]
            array1[j] = array1[j + 1]
            array1[j + 1] = temp
for k in range(0, x - 1 + 1, 1):
    print(array1[k])
