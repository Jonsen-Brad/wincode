"""def is_squert(n):

    i =0
    for i in range(0,n):
        print(i)
        if i**2 ==n:
            return True
        print(i)
    if i == n-1: 
        return False

print(is_squert(1))
"""
def is_squert(n):
    n = n**0.5
    return int(n) == n

print(is_squert(0))
print(is_squert(1))
print(is_squert(4))
"""
i = 0
n = 0
if i*i == 0:
    print("True")
"""
