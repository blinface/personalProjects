from pyfiglet import Figlet
import sys
import random

figlet = Figlet()

if len(sys.argv) != 1 and len(sys.argv) != 3:
    print("Invalid usage")
    sys.exit(1)
elif len(sys.argv) > 2 and sys.argv[1] != "-f" and sys.argv[1] != "font":
    print("Invalid usage")
    sys.exit(1)
elif len(sys.argv) == 3 and sys.argv[2] not in figlet.getFonts():
    print("Invalid usage")
    sys.exit(1)

if len(sys.argv) == 3:
    fnt = sys.argv[2]
else:
    fnt = random.choice(figlet.getFonts())

str = input("Input: ")

figlet = Figlet(font = fnt)

print (figlet.renderText(str))

