list = []
command_name = ""

while command_name.lower() != "stop":
    user_input = input("Enter command: ").split()
    command_name = user_input[0] or "stop"
    value = user_input[1] if len(user_input) > 1 else None

    if command_name.lower() == "add":
        value = int(value)
        list.append(value)
    elif command_name.lower() == "remove":
        if value:
            value = int(value)
            if value in list:
                list.remove(value)
                print(f"Елемента {value} е премахнат успешно.")
            else:
                print(f"Няма такъв елемент {value} в списъка.")
        else:
            if len(list) > 0:
                elem = list.pop()
                print(f"Последният елемент {elem} е успешно премахнат от списъка.")
            else:
                print("Не може да се премахне последният елемент от списъка. Списъка е празен.")
print(f"Крайният списък е: {list}")