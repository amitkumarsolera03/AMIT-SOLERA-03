"""
Mymodule module

    mymodule is demo module to tell how we create python modules

Classes:
    class A: 
        which contains some methods to process data
        foo() - read and analyze data 
        bar() - write result data

Functions:
    read_dir_files(dir_path, ext=".csv") 
        - recursively reads all .csv files and create a single dataframe

"""
import time
import os
...

GLOBAL_VAR = "some config variables"
...

class A:
    """doc string of A"""
    def __init__(self):
        pass
    def foo(self):
        print("calling foo method")
    def bar(self):
        print("calling bar method")

def read_dir_files(dir_path, ext=".csv"):
    """read and create a single dataframe"""
    print("inside read directory files function")

# import mymodule 
# mymodule.__name__ ==> __name__ = "mymodule"    [ as a module ]
# python mymodule.py ==> __name__ = "__main__"   [ as a script ]

print("value of __name__ is ", __name__)

if __name__ == "__main__":
    # below code will execute if we run mymodule.py
    dir_path = "data/"
    df = read_dir_files(dir_path)
    obj = A()
    obj.foo()
    obj.bar()
