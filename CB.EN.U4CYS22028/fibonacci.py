print("Enter the number of elements which you would like in the fibonacci series:")
k = int(input())
fibbo = [0] * (k + 1)

l = 0
fibbo[0] = 1
for m in range(1, k + 1, 1):
    fibbo[m] = fibbo[m - 1] + l
    l = fibbo[m - 1]
for i in range(0, k + 1, 1):
    print(fibbo[i])
