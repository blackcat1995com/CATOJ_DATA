from cyaron import *

for i in range(8, 9):

    test_data = IO(file_prefix="", data_id=i)

    n = randint(1, 100)
    m = randint(1, 10000)
    test_data.input_writeln(n, m)

    for j in range(n):
        x = randint(1, 1000)
        test_data.input_write(x)

    test_data.output_gen("./output/P837")