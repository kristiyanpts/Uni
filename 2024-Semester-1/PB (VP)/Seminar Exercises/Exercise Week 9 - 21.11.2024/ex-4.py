def is_palindrome(num):
    is_palindrome = True
    text = str(num)

    for i in range(len(text) // 2):
        if text[i] != text[-i - 1]:
            is_palindrome = False
            break

    return is_palindrome == True and 1 or 0

def process_palindromes(*numbers):
    palindromes = [number for number in numbers if is_palindrome(number)]
    return palindromes

n = int(input("Въведете броя на числата: "))
numbers = [int(input(f"Въведете цяло число: ")) for i in range(n)]

palindromes = process_palindromes(*numbers)
print("Палиндроми в списъка: ", palindromes)