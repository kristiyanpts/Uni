def calculate_multiple_distances(*strings):
    distances = []

    for i in range(len(strings)):
        first_string = strings[i]

        for j in range(i + 1, len(strings)):
            second_string = strings[j]

            distance = 0

            min_length = min(len(first_string), len(second_string))
            for k in range(min_length):
                distance += abs(ord(first_string[k]) - ord(second_string[k]))

            if (len(first_string) != len(second_string)):
                distance += abs(len(first_string) - len(second_string))

            distances.append(distance)

    return distances

words_amount = int(input("Моля въведете броя на думите: "))
words = [input(f"Дума: ") for i in range(words_amount)]

distances = calculate_multiple_distances(*words)
print("Разстоянията са: ", distances)