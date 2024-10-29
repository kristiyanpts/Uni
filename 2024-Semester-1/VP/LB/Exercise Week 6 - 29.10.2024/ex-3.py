text = input("Enter text: ")
letters = {}

for i in text:
    letters[i] = letters.get(i, 0) + 1

for key, value in letters.items():
    print(f"{key} - {value} times")