import os

# Използвам това, защото по обикновения начин връща, че файла не съществува
file_path = os.path.join(os.path.dirname(__file__), "document.bin")

document_file=open(file_path,mode="rb")

text = document_file.read(4)

print(text)