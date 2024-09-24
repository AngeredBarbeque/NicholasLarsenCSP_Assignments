
def percent(amount):
    per = amount/income*100
    return per

def inputing(strtype):
    type = int(input("How much is your " + strtype + " per month?"))
    return type

print("This is a financial calulator.")

income = inputing("income")

rent = inputing("rent")

utilities = inputing("utilities")

groceries = inputing("groceries")

transportation = inputing("transportation")

savings = float(income)*0.2

expenses = rent + utilities + groceries + transportation

spend = income - expenses - savings

print("You make $", income, "per month")
print("Your expenses are $", expenses, "per month")
print("Your savings are $", savings, "per month")
print("Your spending money is $", spend, "per month")
prent = percent(rent)
putilities = percent(utilities)
pgroceries = percent(groceries)
ptransportation = percent(transportation)
psavings = percent(savings)
pexpenses = percent(expenses)
pspend = percent(spend)
print("Your rent is", prent, "percent of your income.")
print("Your utilities are", putilities, "percent of your income.")
print("Your groceries are", pgroceries, "percent of your income.")
print("Your transportation is", ptransportation, "percent of your income.")
print("Your savings are", psavings, "percent of your income.")
print("Your expenses are", pexpenses, "percent of your income.")
print("Your spending money is", pspend, "percent of your income.")