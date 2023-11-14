angka1, angka2 = map(int, input("").split())

terbesar = angka1 if angka1 > angka2 else angka2
terkecil = angka1 if angka1 < angka2 else angka2

if angka1 > angka2:
    for i in range(terbesar, terkecil - 1, -1):
        print(f"{i} {angka1 + angka2 - i}", end="")
        if i > terkecil:
            print(" - ", end="")
else:
    for i in range(terkecil, terbesar + 1):
        print(f"{i} {angka1 + angka2 - i}", end="")
        if i < terbesar:
            print(" - ", end="")

print()
