while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    P = int(input("Masukkan Pilihan: "))

    if P == 5:
        print("Terimakasih, telah menggunakan kalkulator M Samil Rendy Nor Saleh")
        break
    elif P < 1 or P > 4:
        print("Input anda salah, silahkan coba lagi")
        continue

    angka1 = float(input("Masukkan nilai pertama: "))
    angka2 = float(input("Masukkan nilai kedua: "))

    if P == 1:
        H = angka1 + angka2
        print(f"Hasil Penjumlahan antara {angka1:.2f} dengan {angka2:.2f} adalah {H:.2f}")
    elif P == 2:
        H = angka1 - angka2
        print(f"Hasil Pengurangan antara {angka1:.2f} dengan {angka2:.2f} adalah {H:.2f}")
    elif P == 3:
        H = angka1 * angka2
        print(f"Hasil Perkalian antara {angka1:.2f} dengan {angka2:.2f} adalah {H:.2f}")
    elif P == 4:
        if angka2 == 0:
            print("Pembagian dengan 0 tidak diizinkan.")
            continue
        H = angka1 / angka2
        print(f"Hasil Pembagian antara {angka1:.2f} dengan {angka2:.2f} adalah {H:.2f}")
