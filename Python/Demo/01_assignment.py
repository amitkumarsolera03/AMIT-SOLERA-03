cricket_player_stats = {
    "player_name" : "Virat Kohli",
    "teams_played" : ["INDIA" , "Royal Challengers Bangalore"],
    "formats_played" : ["Test" , "ODI" , "T20"],
    "total_runs" : 7240,
    "total_match_played" : 550
}


temp = "|{:^5}|{:^20}|{:^10}|{:^50}|{:^70}|"

print("_"*161)
print(temp.format("Data" , "Field Identifier" , "Data Type" , "Example" , "Your Reason for using this Data Type"))
print("_"*161)
print(temp.format("1" , "player_name" , "String" , cricket_player_stats["player_name"] , "Names may contain letters and any other characters."))
print("_"*161)
print(temp.format("2" , "teams_played" , "List" , str(cricket_player_stats["teams_played"]) , "A player can play in multiple team."))
print("_"*161)
print(temp.format("3" , "formats_played" , "List" , str(cricket_player_stats["formats_played"]) , "A player can play in multiple formats."))
print("_"*161)
print(temp.format("4" , "total_runs" , "Integer" , cricket_player_stats["total_runs"] , "Total Runs is an Interger Value."))
print("_"*161)
print(temp.format("5" , "total_match_played" , "Integer" , cricket_player_stats["total_match_played"] , "Total match played is an Interger Value."))
print("_"*161)

# print(cricket_player_stats["teams_played"])