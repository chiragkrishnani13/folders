num1 = int(input("enter first number "))
num2 = int(input("enter second number "))
num3 = int(input("enter third number "))
if  num1 + num2 + num3 == 180:
    print("yes")
    if num1 <90 and num2 <90 and num3 <90:
        print("acute angle")
    elif num1 >90 or num2 >90 or num3 >90:
        print("obtuse angle")
    elif num1 == 90 or num2 == 90 or num3 == 90:
        print("right angle triangle")
else:
    print("angle is not valid")





