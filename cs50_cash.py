from cs50 import get_float

def get_dollars():
    while True:
        dollars = get_float("Change owed: ")
        if dollars > 0 and type(dollars) == float:
            return dollars

def get_cents(dollars):
    cents = dollars * 100.0
    return cents

def calculate_quarters(cents):
    quarters = cents // 25.0
    return quarters

def calculate_dimes(cents):

    dimes = cents // 10.0
    return dimes

def calculate_pennies(cents):
    pennies = cents
    return pennies

def calculate_nickels(cents):
    nickels = cents // 5
    return nickels

def main():
    dollars = get_dollars()
    cents = get_cents(dollars)

    quarters = calculate_quarters(cents)
    cents -= quarters * 25.0

    dimes = calculate_dimes(cents)
    cents -= dimes * 10.0

    nickels = calculate_nickels(cents)
    cents -= nickels * 5.0

    pennies = calculate_pennies(cents)
    cents -= pennies * 1.0

    coins = quarters + dimes + nickels + pennies
    print(int(coins))

main()
