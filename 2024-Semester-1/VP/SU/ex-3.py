rows = int(input("Number of rows (positive value): "))
symbol = input("Enter your symbol: ")

if rows < 0:
    print("Invalid input")
else:
    if symbol == "@":
        for i in range(rows, 0, -1):
            print("@ " * i)
    elif symbol == "?":
        for i in range(rows):
            for j in range(rows):
                if j == 0 or j == rows - i - 1 or i == 0:
                   print("?", end=" ")
                else:
                    print(" ", end=" ")
            print()
    else:
        print("Invalid symbol")