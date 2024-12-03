import os

# Използвам това, защото по обикновения начин връща, че файла не съществува
file_path = os.path.join(os.path.dirname(__file__), "ex-2.txt")

file = open(file_path, "r")

lines = file.readlines()

for line in lines:
    print(line, end="")

file.close()