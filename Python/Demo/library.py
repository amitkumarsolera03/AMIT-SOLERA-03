class Library:
    def __init__(self, book_list, library_name):
        self.books = book_list
        self.name = library_name
        self.lend_data = {}  # {book_name: borrower_name}

    def display_books(self):
        print(f"\nAvailable books in {self.name}:")
        for book in self.books:
            if book not in self.lend_data:
                print(f"  - {book}")

    def lend_book(self, book, user):
        if book in self.books:
            if book not in self.lend_data:
                self.lend_data[book] = user
                print(f"\n'{book}' has been lent to {user}.")
            else:
                print(f"\nSorry, '{book}' is already lent to {self.lend_data[book]}.")
        else:
            print(f"\nSorry, '{book}' is not in the library.")

    def add_book(self, book):
        if book not in self.books:
            self.books.append(book)
            print(f"\n'{book}' has been added to the library.")
        else:
            print(f"\n'{book}' already exists in the library.")

    def return_book(self, book):
        if book in self.lend_data:
            self.lend_data.pop(book)
            print(f"\n'{book}' has been returned.")
        else:
            print(f"\n'{book}' was not lent out.")

# Sample books
book_list = ["Python Basics", "Data Structures", "C Programming", "Machine Learning"]
lib = Library(book_list, "Tech Library")

# Menu
while True:
    print("\n===== Library Menu =====")
    print("1. Display Books")
    print("2. Lend a Book")
    print("3. Add a Book")
    print("4. Return a Book")
    print("5. Exit")
    
    choice = input("Enter your choice (1-5): ").strip()

    if choice == '1':
        lib.display_books()
    elif choice == '2':
        book = input("Enter the name of the book you want to borrow: ").strip()
        user = input("Enter your name: ").strip()
        lib.lend_book(book, user)
    elif choice == '3':
        book = input("Enter the name of the book you want to add: ").strip()
        lib.add_book(book)
    elif choice == '4':
        book = input("Enter the name of the book you want to return: ").strip()
        lib.return_book(book)
    elif choice == '5':
        print("\nThank you for using the library. Goodbye!")
        break
    else:
        print("\nInvalid choice! Please select a valid option.")


