def read_file_content(file_name):
    try:
        file = open(file_name, 'r')
        content = file.read()
        file.close()
        return content
    except FileNotFoundError:
        return f"FileNotFoundError: File {file_name} not found"
    except Exception as e:
        return f"Error: {e}"

def main():
    file_name = input("Enter the file name: ")
    print(read_file_content(file_name))

main()