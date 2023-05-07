for i in range(1, 21):
    for j in range(1, 34):
        k = 100 - i - j
        if k < 0 or k % 3:
            continue

        if i * 5 + j * 3 + k // 3 == 100:
            print(i, j, k)