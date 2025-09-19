# List Examples

# Example 1
fruits = ['apple', 'banana', 'orange']
fruits.append('grape')
print(fruits)

# Example 2
numbers = [1, 2, 3, 4, 5]
numbers.insert(2, 10)
print(numbers)

# Example 3
colors = ['red', 'green', 'blue']
colors.remove('green')
print(colors)

# Example 4
scores = [85, 92, 78, 96]
scores.sort()
print(scores)

# Example 5
names = ['John', 'Mary', 'Bob']
names.reverse()
print(names)

# Example 6
items = [1, 2, 3]
items.extend([4, 5, 6])
print(items)

# Example 7
letters = ['a', 'b', 'c', 'd']
letters.pop()
print(letters)

# Example 8
values = [10, 20, 30]
values.clear()
print(values)

# Example 9
data = [1, 2, 2, 3]
count = data.count(2)
print(count)

# Example 10
mixed = [1, 'hello', 3.14]
length = len(mixed)
print(length)
























# Tuple Examples

# Example 1
coordinates = (10, 20)
x, y = coordinates

# Example 2
rgb = (255, 0, 128)
red = rgb[0]

# Example 3
days = ('Mon', 'Tue', 'Wed')
first_day = days[0]

# Example 4
numbers = (1, 2, 3, 2, 2)
count = numbers.count(2)

# Example 5
fruits = ('apple', 'banana', 'orange')
index = fruits.index('banana')

# Example 6
empty_tuple = ()
size = len(empty_tuple)

# Example 7
single = (42,)
value = single[0]

# Example 8
nested = ((1, 2), (3, 4))
first_pair = nested[0]

# Example 9
scores = (85, 92, 78)
max_score = max(scores)

# Example 10
letters = ('a', 'b', 'c')
joined = ''.join(letters)

# Set Examples

























# Example 1
colors = {'red', 'green', 'blue'}
colors.add('yellow')

# Example 2
numbers = {1, 2, 3, 4}
numbers.remove(3)

# Example 3
fruits = {'apple', 'banana'}
fruits.discard('orange')

# Example 4
set1 = {1, 2, 3}
set2 = {3, 4, 5}
union = set1.union(set2)

# Example 5
set_a = {1, 2, 3, 4}
set_b = {3, 4, 5, 6}
intersection = set_a.intersection(set_b)

# Example 6
original = {1, 2, 3, 4}
subset = {1, 2}
result = subset.issubset(original)

# Example 7
data = {10, 20, 30}
data.clear()

# Example 8
items = {1, 2, 3}
removed = items.pop()

# Example 9
set1 = {1, 2, 3}
set2 = {4, 5, 6}
difference = set1.difference(set2)

# Example 10
duplicates = [1, 2, 2, 3, 3, 4]
unique = set(duplicates)



























# Dictionary Examples

# Example 1
person = {'name': 'John', 'age': 25}
name = person['name']

# Example 2
scores = {'math': 85, 'science': 92}
scores['english'] = 88

# Example 3
inventory = {'apples': 10, 'bananas': 5}
inventory.pop('bananas')

# Example 4
student = {'name': 'Alice', 'grade': 'A'}
keys = student.keys()

# Example 5
prices = {'milk': 2.50, 'bread': 1.25}
values = prices.values()

# Example 6
data = {'x': 10, 'y': 20}
items = data.items()

# Example 7
config = {'debug': True, 'port': 8080}
debug_mode = config.get('debug')

# Example 8
dict1 = {'a': 1, 'b': 2}
dict2 = {'c': 3, 'd': 4}
dict1.update(dict2)

# Example 9
settings = {'theme': 'dark', 'lang': 'en'}
settings.clear()

# Example 10
original = {'x': 1, 'y': 2}
copy = original.copy()