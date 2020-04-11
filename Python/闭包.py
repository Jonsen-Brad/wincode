def num(num):
    def num_in (num_in):
        return num + num_in
    return num_in
a = num(100)
b = a(10)
c = num(100)(10)
print(a)
print('b is:')
print(b)
print(c)
