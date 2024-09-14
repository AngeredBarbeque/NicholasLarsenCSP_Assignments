#Nicholas Larsen

income = input("This is a financial calculator. What is your monthly income?: ")

rent = input("How much does your rent cost per month?: ")

utilities = input("How much are your utilites per month?: ")

groceries = input("How much do you spend on groceries per month?: ")

transportation = input("How much do you spend on transportation per month?: ")

savings = income*0.2

expenses = rent + utilities + groceries + transportation

spend = income - expenses - savings

print("You make", income, "per month")
print("Your expenses are", expenses, "per month")
print("Your savings are", savings, "per month")
print("Your spending money is", spend, "per month")
prent = (rent/income)*100
putilities = (utilities/income)*100
pgroceries = (groceries/income)*100
ptransportation = (transportation/income)*100
psavings = (savings/income)*100
pexpenses = (expenses/income)*100
pspend = (spend/income)*100
print("Your rent is", prent, "percent of your income.")
print("Your rent is", putilities, "percent of your income.")
print("Your rent is", pgroceries, "percent of your income.")
print("Your rent is", ptransportation, "percent of your income.")
print("Your rent is", psavings, "percent of your income.")
print("Your rent is", pexpenses, "percent of your income.")
print("Your rent is", pspend, "percent of your income.")