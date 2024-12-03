import os

# Използвам това, защото по обикновения начин връща, че файла не съществува
file_path = os.path.join(os.path.dirname(__file__), "document.bin")

document_file=open(file_path,mode="wb+") 

text = "This is good"
binary_text = text.encode("ascii")

document_file.write(binary_text)

document_file.close()