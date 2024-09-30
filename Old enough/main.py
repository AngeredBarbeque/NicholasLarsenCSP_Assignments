age = int(input("Please enter your age: "))
if age >= 18:
    print("You are old enough to vote.")
elif age >= 16:
    print("You are old enough to drive.")
elif age >= 15:
    print("You are old enough to get a drivers permit.")
elif age >= 6:
    print("You are old enough to go to school.")
else:
    print("You aren't old enough to go to school.")
