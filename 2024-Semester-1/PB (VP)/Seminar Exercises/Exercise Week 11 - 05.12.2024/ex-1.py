class Shoes:
    def __init__(self, brand, price, color, size, quantity):
        self.brand = brand
        self.price = price
        self.color = color
        self.size = size
        self.quantity = quantity

    def Sale(self, quantity):
        if self.quantity < quantity:
            print('Not enough stock')

        self.quantity -= quantity

    def Purchase(self, quantity):
        self.quantity += quantity

    def __str__(self):
        return f"Brand: {self.brand}, Price: {self.price}, Color: {self.color}, Size: {self.size}, Quantity: {self.quantity}"

def get_avg_price(shoes_list):
    price = 0

    for shoe in shoes_list:
        price += shoe.price

    return price / len(shoes_list)

def sort_price(shoes_list):
    shoes_list.sort(reverse=True, key=lambda x: x.price)
    return shoes_list

def shoes_searching(shoes_list, brand, size):
    shoes = []
    avg_price = get_avg_price(shoes_list)

    for shoe in shoes_list:
        if shoe.brand == brand and shoe.size == size and shoe.price < avg_price:
            shoes.append(shoe)

    return shoes

def cheapest_shoes(shoes_list, color):
    filtered_shoes = [x for x in shoes_list if x.color == color]

    if not filtered_shoes:
        return "Color is not available"
    else:
        return min(filtered_shoes, key=lambda x: x.price)

def delete_shoes(shoes_list, brand):
    for shoe in shoes_list:
        if shoe.brand == brand:
            shoes_list.remove(shoe)

    return shoes_list

shoes_list = []

shoes_list.append(Shoes('Nike', 100, 'Black', 10, 5))
shoes_list.append(Shoes('Adidas', 120, 'White', 9, 10))
shoes_list.append(Shoes('Puma', 80, 'Red', 11, 7))
shoes_list.append(Shoes('Reebok', 90, 'Blue', 8, 3))
shoes_list.append(Shoes('Vans', 70, 'Green', 12, 2))
shoes_list.append(Shoes('Converse', 60, 'Yellow', 7, 4))
shoes_list.append(Shoes('New Balance', 110, 'Orange', 6, 6))

print(sort_price(shoes_list))
print(shoes_searching(shoes_list, 'Nike', 10))
print(cheapest_shoes(shoes_list, 'Black'))
print(delete_shoes(shoes_list, 'Nike'))