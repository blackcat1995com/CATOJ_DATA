from cyaron import *

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    if i <= 1:
        V = 100
        n = 10
        C = randint(1, 100)
    elif i <= 2:
        V = 100
        n = 50
        C = randint(1, 100)
    elif i <= 5:
        V = 1000
        n = 1000
        C = randint(3000, 5000)
    else:
        V = randint(8000, 10000)
        n = 10000
        C = randint(3000, 5000)

    test_data.input_writeln(V, n, C)

    for j in range(n):
        v = randint(1, 5)
        c = randint(1, 5)
        test_data.input_writeln(v, c)

    test_data.output_gen("./output/P836")