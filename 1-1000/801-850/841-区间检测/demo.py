from cyaron import *

for i in range(9, 11):

    test_data = IO(file_prefix="", data_id=i)

    if i <= 8:
        n = randint(100000, 500000)
        m = randint(100000, 500000)
        test_data.input_writeln(n, m)
        for j in range(n):
            x = randint(1, 500000)
            test_data.input_write(x)
        test_data.input_writeln()    
        for j in range(m):
            L = randint(1, 500000 // 2)
            R = randint(L + 100, 500000)
            test_data.input_writeln(L, R)
    else:
        n = randint(500000, 1000000)
        m = randint(500000, 1000000)
        test_data.input_writeln(n, m)
        for j in range(n):
            x = randint(1, 1000000)
            test_data.input_write(x)
        test_data.input_writeln()    
        for j in range(m):
            L = randint(1, 1000000 // 2)
            R = randint(L + 100, 1000000)
            test_data.input_writeln(L, R)

    test_data.input_writeln(n, m)

    test_data.output_gen("./output/demo")