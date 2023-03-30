print("enter the number of values")
x = int(input())
y = [0] * (x)

for i in range(0, x - 1 + 1, 1):
    print("enter:")
    z = int(input())
    y[i] = z
for i in range(0, x - 1 + 1, 1):
    print("Array[" + str(i) + "] =" + str(y[i]))
