import csv


class Item:
    pay_rate = 0.8  # the pay rate aber 20% discount
    all = []

    def __init__(self, name: str, price: float, quantity: int):
        assert quantity >= 0, "Quantity must be positive"
        assert price >= 0, "Price must be positive"

        self.quantity = quantity
        self.price = price
        self.__name = name

        Item.all.append(self)

    @property
    def name(self):
        return self.__name

    @name.setter
    def name(self, value):
        self.__name = value

    def calculate_total_price(self) -> float:
        return self.price * self.quantity

    def apply_discount(self) -> None:
        self.price = self.price * self.pay_rate

    @classmethod
    def instantiate_from_csv(cls):
        with open('items.csv', 'r') as f:
            reader = csv.DictReader(f)
            items = list(reader)

        for item in items:
            Item(item['name'], float(item['price']), int(item['quantity']))

    @staticmethod
    def is_integer(value) -> bool:
        if isinstance(value, float):
            return value.is_integer()

        elif isinstance(value, int):
            return True
        return False

    def __repr__(self):
        return f"{self.__class__.__name__}({self.name!r}, {self.price!r}, {self.quantity!r})"

