print("Enter the number of elements which you would like to enter:")
x = int(input())
a = [0] * (x)

for y in range(0, x - 1 + 1, 1):
    print("Enter the number:")
    a[y] = int(input())
for k in range(0, x - 1 + 1, 1):
    print(a[k])
