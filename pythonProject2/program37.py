# wap create a game rock paper scissor
import random

user_score = 0
comp_score = 0
name = input("ENTER YOUR NAME ")
n = int(input(" HOW MANY ROUNDS YOU WANT TO PLAY "))

while user_score < n and comp_score < n:
    user = input("enter rock/paper/scissor ")
    comp = random.choice(["rock", "paper", "scissor"])
    if name == comp:
        print("same")
        continue
    if user == "rock":
        if comp == "scissor":
            user_score = user_score + 1
        else:
            comp_score = core = comp_score + 1
    elif user == "scissor":
        if comp == "paper":
            comp_score = comp_score + 1

        else:
            user_score = user_score + 1

    elif user == "paper":
        if comp == "rock":
            user_score = user_score + 1
        else:
            comp_score = comp_score + 1
    else:
        print("INVALID INPUT")

    print(name, user_score, "comp=", comp_score)

print("GAME OVER")
print(name, user_score, "comp=", comp_score)
