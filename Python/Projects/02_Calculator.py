print("Here You can perform Addition , Subtraction , Multiplication and Division >>>")
while True:
    print("_"*35)
    print("""Choose Your choice to perform--
        1) Addition
        2) Subtraction
        3) Multiplication 
        4) Division
        5) Exit()""")
    print("\nFirst tell me Which operation you want to perform ---")
    user_ch = int(input("Enter a Choice to perform Operation ... "))
    if user_ch == 5:
        print("Thank You...")
        break
    elif user_ch == 1:
        a = int(input("Enter the first Integer Operand -"))    
        b = int(input("Enter the Second Integer Operand -"))
        print(f"Addition of {a} and {b} is : {a+b}")
        continue
    elif user_ch == 2:
        a = int(input("Enter the first Integer Operand -"))    
        b = int(input("Enter the Second Integer Operand -"))
        print(f"Subtraction of {a} and {b} is : {a-b}")
        continue
    elif user_ch == 3:
        a = int(input("Enter the first Integer Operand -"))    
        b = int(input("Enter the Second Integer Operand -"))
        print(f"Multiplication of {a} and {b} is : {a*b}")
        continue
    elif user_ch == 4:
        a = int(input("Enter the first Integer Operand -"))    
        b = int(input("Enter the Second Integer Operand -"))
        print(f"Division of {a} and {b} is : {a/b}")
        continue
    else:
        print("Invalid Input")