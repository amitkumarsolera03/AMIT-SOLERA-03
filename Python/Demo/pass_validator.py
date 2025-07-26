password = input("Enter a Valid Password :-")


# ----------------------------------------------------

# upper = 0
# lower = 0
# digit = 0
# char = 0
# for i in password:
#     if i.isupper():
#         upper+=1
#     elif i.islower():
#         lower+=1
#     elif i.isdigit():
#         digit+=1
#     else:
#         char+=1
# if len(password) >= 8:
#     if (upper and lower and digit and char) == True: 
#             print("Valid password")
#     else:
#         print("Not a Strong and Valid password")
# else:
#     print("Invalid Length")

# ------------------------------------------------------



if len(password) >= 8:
    upper = False
    lower = False
    digit = False
    char = False

    for i in password:
        if i.isupper():
            upper = True
        elif i.isdigit():
            digit = True
        elif i.islower():
            lower = True
        elif not i.isidentifier():
            char = True 

else:
    print("Please Enter an Valid length of your password.....")

if (char and digit and upper and lower) == True:
    print("Your Entered password is Valid password...")
else:
    print("Please Enter an Valid password.....")
