import random

random_ch = random.randint(1,101)

user1 = input("Enter your Name :- ").strip().title()
print(f"Welcome, {user1} into the Number guessing Game with the computer :)")
count = 1
while count <= 10:
    user_ch = int(input("Guess a Number between 1 to 100...\n--> "))
    if user_ch not in range(1, 101):
        print(f"\nOle le le le .... You break your range.\nYou have still {11-count} choice.")
        continue
    elif random_ch == user_ch:
        print(f"You Successfully Guess the Number in {count} attempt and you choose {user_ch} and computer also Choose {random_ch}.\n")
        print("\n--> Do you want to play more ...")
        ch = input("Tell me .... ").capitalize()
        if ch in ("Yes" , "Yoo" , "Y"):
            count = 0
            print("Welcome back ...")
            continue
        elif ch in ("N","No","Naah","Nooi"):
            print("ThankYou for playing...")
            break
        else:
            print("Sorry , We can't Understand ... So Game is Closed...")
            break
    elif random_ch > user_ch:
        print(f"\nThis is your {count} choice.\tYour number is too small .\nThink Bigger.")
    elif random_ch < user_ch:
        print(f"\nThis is your {count} choice.\tYour number is too large .\nThink Smaller.")

    count += 1
    if count > 10 :
        print(f"Out of limit ....\nYou can't guess the correct number in {count-1} attempt.\nComputer choose {random_ch}")
        print("\n--> Do you want to play more ...")
        ch = input("Tell me .... ").capitalize()
        if ch in ("Yes" , "Yoo" , "Y"):
            count = 0
            print("Welcome back ...")
            continue
        elif ch in ("N","No","Naah","Nooi"):
            print("ThankYou for playing...")
            break
        else:
            print("Sorry , We can't Understand ... So Game is Closed...")
            break
