import time

inputTime = int(input("What is the time to the nearest hour? Use 24 hour clock: "))
if inputTime <= 12 and inputTime >= 6:
    print("Good morning!")
elif inputTime >= 13 and inputTime <= 18:
    print("Good afternoon!")
elif inputTime >= 19 and inputTime <= 24:
    print("Good evening.")
else:
    print("Why are you up right now?")

