text = input("Въведете текст: ")

replacedSemiColon = text.replace(",", "!")
swapedLetters = replacedSemiColon.swapcase()
spaceSplittedWords = [word for word in replacedSemiColon.split(" ") if len(word) > 8]

print(f"a) -> {replacedSemiColon}")
print(f"b) -> {swapedLetters}")
print(f"c) -> {" ".join(spaceSplittedWords)}")