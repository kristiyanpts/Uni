class Book:
    def __init__(self, title, author, year):
        self.title = title
        self.author = author
        self.year = year

    def printDetails(self):
        print(f"{self.title} by {self.author} ({self.year})")

class Library:
    def __init__(self, books=[]):
        self.books = books

    def addBook(self, book):
        if not isinstance(book, Book):  # Ensure the object is an instance of Book or its subclasses
            raise TypeError("Only objects of type 'Book' can be added to the library.")
        
        self.books.append(book)

    def removeBookByTitle(self, title):
        for book in self.books:
            if book.title == title:
                self.books.remove(book)
                return
        
        print(f"Book with title {title} not found.")
    
    def printAllBooks(self):
        for book in self.books:
            book.printDetails()

book1 = Book("Kniga 1", "Avtor 1", 1997)
book2 = Book("Kniga 2", "Avtor 2", 1954)
book3 = Book("Kniga 3", "Avtor 3", 1925)

books = [book1, book2, book3]

library = Library(books)

print("Initial books:")
library.printAllBooks()

# bookToAdd = Book("Kniga 4", "Avtor 4", 1951)
bookToAdd = "kniga"
library.addBook(bookToAdd)

print("\nBooks after adding a new one:")
library.printAllBooks()

library.removeBookByTitle("Kniga 2")

print("\nBooks after removing one:")
library.printAllBooks()