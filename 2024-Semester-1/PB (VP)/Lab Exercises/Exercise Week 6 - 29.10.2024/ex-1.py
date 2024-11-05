text = input("Enter text: ")
is_palindrome = True

for i in range(len(text) // 2):
    if text[i] != text[-i - 1]:
        is_palindrome = False
        break

if is_palindrome:
    print("The text is a palindrome")
else:
    print("The text is not a palindrome")