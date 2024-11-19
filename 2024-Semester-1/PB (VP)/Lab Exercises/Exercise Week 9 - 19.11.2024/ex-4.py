class BankAccount:
    def __init__(self, holderName, balance):
        self.holderName = holderName
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        self.balance -= amount
    
    def printDetails(self):
        print(f"Account holder: {self.holderName}, Balance: {self.balance}")

class Bank:
    def __init__(self, accounts=[]):
        self.accounts = accounts

    def addAccount(self, account):
        if not isinstance(account, BankAccount):  # Ensure the object is an instance of Book or its subclasses
            raise TypeError("Only objects of type 'BankAccount' can be added to the bank.")

        self.accounts.append(account)

    def findAccountByHolderName(self, holderName):
        for account in self.accounts:
            if account.holderName == holderName:
                return account
            
        print(f"\nAccount for holder {holderName} not found.")
    
    def printAllAccounts(self):
        for account in self.accounts:
            account.printDetails()

account1 = BankAccount("John Doe", 1000)
account2 = BankAccount("Jane Doe", 2000)
account3 = BankAccount("Alice Smith", 3000)

accounts = [account1, account2, account3]

bank = Bank(accounts)

print("Initial accounts:")
bank.printAllAccounts()

accountToAdd = BankAccount("Bob Brown", 4000)
bank.addAccount(accountToAdd)

print("\nAccounts after adding a new one:")
bank.printAllAccounts()

accountToSearch = bank.findAccountByHolderName("Jane Doe 2")
if accountToSearch:
    print("\nAccount found for holder Jane Doe:")
    accountToSearch.printDetails()

    accountToSearch.deposit(500)
    print("\nAccount after depositing 500:")
    accountToSearch.printDetails()

    accountToSearch.withdraw(200)
    print("\nAccount after withdrawing 200:")
    accountToSearch.printDetails()