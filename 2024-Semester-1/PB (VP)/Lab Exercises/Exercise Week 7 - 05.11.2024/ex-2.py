def isNumPalindrome(num):
    is_palindrome = True
    text = str(num)

    for i in range(len(text) // 2):
        if text[i] != text[-i - 1]:
            is_palindrome = False
            break

    return is_palindrome == True and 1 or 0

num = int(input("Enter a number: "))
print(isNumPalindrome(num))
