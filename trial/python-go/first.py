class Animal:
    def __init__(self, name, species):
        self.name = name
        self.species = species

    def speak(self):
        return f"{self.name} makes a noise."

class Dog(Animal):
    def __init__(self, name, breed):
        super().__init__(name, "Dog")
        self.breed = breed

    def speak(self):
        return f"{self.name} says Woof!"

class Cat(Animal):
    def __init__(self, name, breed):
        super().__init__(name, "Cat")
        self.breed = breed

    def speak(self):
        return f"{self.name} says Meow!"

# Create instances of Dog and Cat
dog = Dog("Buddy", "Golden Retriever")
cat = Cat("Whiskers", "Siamese")

print(dog.speak())
print(cat.speak())
