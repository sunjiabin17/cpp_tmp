import os, sys, time

def add(a, b):
    return a + b


if __name__ == '__main__':
    print(sys.argv)
    print('current path is: ', os.getcwd())
    print('current time is: ', time.time())
    print(add(1, 2))
    
    