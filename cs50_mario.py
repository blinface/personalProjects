#"more" version of cs50 mario from pset6

def get_height():
    while True:
        try:
            n = int(input("Height: "))
        except ValueError:
            get_height()

        if n >= 1 and n <= 8:
            return n

def main():

    n = get_height()
    rows = 1
    spaces = n - 1

    for i in range(n):
        print(' ' * spaces, end="")
        print("#" * rows, end="")

        print(' ', end="")
        print("#" * rows)
        rows += 1
        spaces -= 1

main()
