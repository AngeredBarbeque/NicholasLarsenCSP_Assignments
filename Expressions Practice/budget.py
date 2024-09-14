#Nicholas Larsen

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
prent = (rent/income)*100
putilities = (utilities/income)*100
pgroceries = (groceries/income)*100
ptransportation = (transportation/income)*100
psavings = (savings/income)*100
pexpenses = (expenses*100)/income
pspend = (spend/income)*100
print("Your rent is", prent, "percent of your income.")
print("Your utilities are", putilities, "percent of your income.")
print("Your groceries are", pgroceries, "percent of your income.")
print("Your transportation is", ptransportation, "percent of your income.")
print("Your savings are", psavings, "percent of your income.")
print("Your expenses are", pexpenses, "percent of your income.")
print("Your spending money is", pspend, "percent of your income.")