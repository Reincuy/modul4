n, k = map(int, input().split())

total = 0

for i in range(1, n + 1):
    jumlah = 0
    for j in range(i, 0, -1):
        jumlah += j * k
        if j > 1:
            print("({} * {}) + ".format(j, k), end='')
        else:
            print("({} * {}) = {}".format(j, k, jumlah))
    total += jumlah

print(total)
