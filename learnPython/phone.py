from item import Item


class Phone(Item):
    def __init__(self, name: str, price: float, quantity: int, broken_phones: int = 0):
        super().__init__(name, price, quantity)
        assert broken_phones >= 0, "Broken Phones must be positive"

        self.broken_phones = broken_phones
