from cyaron import *

for i in range(1, 11):

    test_data = IO(file_prefix="", data_id=i)

    n = randint(1000, 200000)
    test_data.input_writeln(n)

    test_data.output_gen("./output/P845")