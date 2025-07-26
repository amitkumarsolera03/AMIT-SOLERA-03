def empty_board():
    pat = """
         ___ ___ ___ 
        |{:^3}|{:^3}|{:^3}|
         --- --- ---  
        |{:^3}|{:^3}|{:^3}|
         --- --- --- 
        |{:^3}|{:^3}|{:^3}|
         ___ ___ ___ 
         
         """
    moves_pat = pat.format(1,2,3,4,5,6,7,8,9)
    print(moves_pat)
empty_board()    

def user_input():
    user1 = input("Enter User 1 Name :")
    user2 = input("Enter User 2 Name :")
    
def fill_pat(*values):
    moves = [1,2,3,4,5,6,7,8,9]
    