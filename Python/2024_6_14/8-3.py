class Person:
    def __init__(self, name, adress,phone_number):
        self.name = name
        self.adress = adress
        self.phone_number = phone_number
class Customer(Person):
    def __init__(self, name, address, phone_number, customer_number, on_mail_list):
        super().__init__(name, address, phone_number)
        self.customer_number = customer_number
        self.on_mail_list = on_mail_list

customer = Customer("John Doe", "123 Main St", "555-1234", "001", True)
print("Customer Information:")
print("Name:", customer.name)
print("Address:", customer.adress)
print("Phone Number:", customer.phone_number)
print("Customer Number:", customer.customer_number)
print("On Mail List:", customer.on_mail_list)