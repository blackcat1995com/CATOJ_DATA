from cyaron import *

for i in range(4, 5):

    test_data = IO(file_prefix="", data_id=i)

    n = randint(1000, 10000)
    m = randint(500, 100)
    test_data.input_writeln(n, m)
    for j in range(n):
        x = randint(1, 1000000000)
        test_data.input_write(x)
    test_data.input_writeln()    
    for j in range(m):
        L = randint(1, n // 2)
        R = randint(L + 1, n)
        test_data.input_writeln(L, R)

    test_data.output_gen("./output/baoli")