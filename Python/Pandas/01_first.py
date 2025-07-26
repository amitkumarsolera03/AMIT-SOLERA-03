# import pandas as pd

# s = pd.Series([1,2,3])
# print(s)
# s.index = ["A","B","c"]
# print(s)

# df = pd.DataFrame({
#     "Names":["Amit","Yogi","Sonu","Abhi"],
#     "nums":[1,3,2,5],
#     "Age":[17,20,16,18]
# })
# df.index = ["me","hacker","a","B"]
# print(df)

import pandas as pd

data = {
  "calories": [420, 380, 390],
  "duration": [50, 40, 45]
}

#load data into a DataFrame object:
df = pd.DataFrame(data)
print(df)
print("----------------------\n")
print(df.loc[0])
print("----------------------\n")
print(df.iloc[0])

