def generate_code(characters, key):
    if not characters.isalpha():
        return "Invalid input: The text should contain only letters"
    
    if not isinstance(key, int):
        return "Invalid input: The key should be an integer"
    
    code = ""

    for i in range(len(characters)):
        character = ord(characters[i])
        new_character = chr((character + (i + 1) * key) % 128)
        code += new_character

    return code

text = input("Моля въведете текста, който искате да промените: ")
key = int(input("Ключът е: "))

print("Резултатният код е:", generate_code(text, key))