import time

# ---------------------------------------------------------

# def user_data():
#     global data
#     # data = {
#     #     101 : {
#     #         "UserName" : "Amit Kumar Verma",
#     #         "PassWord": "@AmitSolera123",
#     #         "Balance" : 100000
#     #            },
#     #     102 : {
#     #         "UserName" : "Yogendra Kumar",
#     #         "PassWord": "@Samriya123",
#     #         "Balance" : 100000
#     #     }
#     # }
#     # global ids
#     # ids = list(data.keys())
#     return data , ids
# -----------------------------------------------------------


data = {
    101 : {
        "UserName" : "Amit Kumar Verma",
        "PassWord": "@AmitSolera123",
        "Balance" : 100000
            },
    102 : {
        "UserName" : "Yogendra Kumar",
        "PassWord": "@Samriya123",
        "Balance" : 100000
    }
}

ids = list(data.keys())

def update_data(new_id , new_data):
    global data
    global ids
    # data , ids = user_data()
    data.update({new_id : new_data})

    return data , ids

def Pass_Validator(password):
    upper = 0
    lower = 0
    digit = 0
    char = 0
    for i in password:
        if i.isupper():
            upper+=1
        elif i.islower():
            lower+=1
        elif i.isdigit():
            digit+=1
        else:
            char+=1
    if len(password) >= 8:
        if (upper and lower and digit and char) == True: 
                print("Valid password")
                return password
        else:
            print("Not a Strong and Valid password")
            return False
    else:
        print("Your password is less then 8 Character's.")
        return False


def User_signup():
    data = {}
    print("Welcome to \"SIGNUP\" process....\tNow You need to enter your details..\n")
    username = input("Enter Your Name:- ")
    print("Enter an Valid password\n\t(Combination of 8 character which contains special character , uppercase , lowercase and digit)")
    password = input("-->")

    valid_pass = Pass_Validator(password)
    if valid_pass:
        re_pass = input("Please again Enter your password...")
        if valid_pass == re_pass:
            print("Your password is Matched With Your previous password...")
            # data , ids = user_data()
            print("For Continue you need to Pay your Initial amount---")
            agree = choices()
            
            new_id = (ids[-1])+1
            new_data = {"UserName" : username, "PassWord" : valid_pass , "Balance" : 100000}
            
            update_data(new_id , new_data)
            # update_data()
            # data.update({new_id : new_data})
            # ids.append(new_id)
           
            return data , ids
        else:
            print("Your password Not Matched With your previous password...")
            print("-->Your signup process is Failed....\n\tTry Again Later...")
    else:
        print("I can't \'SIgNUP\' with this password...")


def choices():
    access = input("Do You want to Continue....")
    print("Enter \'Y\' to Continue..\nEnter \'N\' to Exit..")
    yes = ('Yes','y','Y','yes','Yoo','yoo','yup,','Yup')
    no = ('No','N','n','no','Noi','noi','Naah','naah')

    if access in yes:
        print("Let's continue...")
        return access
    elif access in no:
        print("Thanks for visit")
        return
    
def user_login():

    print("Welcome to Log-in page of Bank Application")
    # username = input("Enter Your Name:- ")
    user_id = int(input("Enter Your valid User-ID :- "))
    print("Enter an Valid password\n\t(Combination 8 character which contains special character , uppercase , lowercase and digit)")
    password = input("-->")

    # data , ids = user_data()

    for i in ids:
        if i == user_id:
            print("Valid ID")
            break
    else:
            print("Your User-ID is Incorrect...")
            print("\tWe Can't continue.. please Try Again later.....")
    time.sleep(1)
    valid_pass = Pass_Validator(password)

    if valid_pass:
        re_pass = input("Please again Enter your password...")
        if valid_pass == re_pass:
            print("Your password is Matched With Your previous password...")
            
            time.sleep(1)
            print("Wait for Loading your Data.....")
            time.sleep(2)

            print(f"""
                Your user-ID is {user_id}
                --------------------
                       Your UserName --> {data[user_id]['UserName']:<20}
                Your Account Balance --> {data[user_id]['Balance']:<20}             
""")
            choices()
            return user_id
        else:
            print("Your password Not Matched With your previous password...")
            print("-->Your signup process is Failed....\n\tTry Again Later...")
    else:
        print("I can't \'LOG-IN\' with this password...")

def check_user_data():
    access_data = data[101]
    print(f"Welcome, User-ID number :-101 ")
    print(f"Your UserName is {access_data["UserName"]} and Your Bank Balance is {access_data["Balance"]}")

def withdrow_amount():
    amount = int(input("Enter amount that you want to withdrow "))
    user_amount = data[101].get("Balance")
    if amount in range(0,user_amount+1):
        user_amount-=amount

        return user_amount
    else:
        print("Withdrowal cancel....")

def deposit_amount():
    amount = int(input("Enter Amount to Deposit...."))
    user_amount = data[101].get("Balance")
    user_amount+= amount

    return user_amount



User_signup()
print(f"After Sign-up{data}")




















































































































































# data = {
#      "UserName" : "Amit Kumar Verma",
#      "ID" : 7023763971,
#      "passWord" : 7023

# }

# input_id = int(input("Enter Your valid User Id...."))
# user_pass = input("Enter Your Password....")


# balance = 1000
# while True:
#     print("""Yours Choices are :-
#           1. For check your balance 
#           2. For Withdrow amount
#           3. For deposit amount
#           4. Exit()""")
#     choice = int(input("Enter any choice to perform any operation :- "))

#     if choice == 1:
#         print(f"Your Current Balance is {balance}")
#     elif choice == 2:
#         withdrow = int(input("Enter amount to withdrow:- "))
#         if withdrow in range(0,balance+1):
#                 balance -= withdrow
#     elif choice == 3:
#         deposit = int(input("Enter any amount to deposite :-"))
#         if deposit >0:
#             balance += deposit
#     else:
#         print("Thanks")
#         break