try:
    # code to execute
    # if error occures then execute except block
    print('hello world')
    a = float(input('a: ')) # ValueError
    b = float(input('b: ')) # ValueError
    r = a / b # ZeroDivisionError
    print("result: ", result) # NameError - result not defined
except Exception as err:
    print("!Somethig went wrong")
    print(err)
