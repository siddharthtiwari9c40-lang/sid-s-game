class BankAccount:
    def __init__(self, account_holder, balance=0):
        self.account_holder = account_holder
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        if amount <= self.balance:
            self.balance -= amount
        else:
            print("Insufficient balance")

    def display(self):
        print(f"Account Holder: {self.account_holder}, Balance: {self.balance}")

acc1 = BankAccount("Siddharth", 1000)  
acc2 = BankAccount("Aman")             

acc1.deposit(500)
acc1.withdraw(300)

acc2.deposit(800)
acc2.withdraw(200)

acc1.display()
acc2.display()