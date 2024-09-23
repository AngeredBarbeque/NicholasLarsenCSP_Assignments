
def percent(amount):
    per = amount/income*100
    return per


income = int(input("This is a financial calculator. What is your monthly income?: "))

rent = int(input("How much does your rent cost per month?: "))

utilities = int(input("How much are your utilites per month?: "))

groceries = int(input("How much do you spend on groceries per month?: "))

transportation = int(input("How much do you spend on transportation per month?: "))

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