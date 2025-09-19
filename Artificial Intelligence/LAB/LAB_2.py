# Creating a blank list
List = []
print("Blank List: ")
print(List)

# Creating a list of numbers
List = [10, 20, 14]
print("\nList of numbers: ")
print(List)

# Creating a list of strings and accessing using index
List = ["I", "Love", "Pakistan"]
print("\nList Items: ")
print(List[0])  
print(List[2])  

# Creating a multi-dimensional list
List = [["I", "Love"], ["Pakistan"]]
print("\nMulti-Dimensional List: ")
print(List)



# List with duplicate numbers
List = [1, 2, 4, 4, 3, 3, 3, 6, 5]
print("List with duplicate numbers: ")
print(List)

# List with mixed data types
List = [1, 2, 'Geeks', 4, 'For', 6, 'Geeks']
print("List with mixed values: ")
print(List)




# Empty list size
List1 = []
print("Empty list size:", len(List1))

# List with elements size
List2 = [10, 20, 14]
print("List size:", len(List2))






# Adding elements one by one
List = []
print("Initial blank list:", List)

# Adding single elements
List.append(1)
List.append(2)
List.append(4)
print("After adding three elements:", List)

# Adding elements using loop
for i in range(1, 4):
    List.append(i)
print("After adding elements 1-3:", List)

# Adding a tuple
List.append((5, 6))
print("After adding tuple:", List)

# Adding another list as element
List2 = ['For', 'Geeks']
List.append(List2)
print("After adding a list:", List)










# Inserting at specific positions
List = [1, 2, 3, 4]
print("Initial List:", List)

# Insert at specific positions
List.insert(3, 12)  # Insert 12 at index 3
List.insert(0, 'Geeks')  # Insert 'Geeks' at beginning
print("After insert operations:", List)









# Adding multiple elements at once
List = [1, 2, 3, 4]
print("Initial List:", List)

# Extend with multiple elements
List.extend([8, 'Geeks', 'Always'])
print("After extend operation:", List)







# Accessing elements by index
List = ["Geeks", "For", "Geeks"]
print("Accessing elements:")
print("First element:", List[0])
print("Third element:", List[2])

# Accessing multi-dimensional list
List = [['Geeks', 'For'], ['Geeks']]
print("From nested list:")
print("List[0][1]:", List[0][1])  
print("List[1][0]:", List[1][0])  






# Using negative indices
List = [1, 2, 'Geeks', 4, 'For', 6, 'Geeks']
print("Original list:", List)
print("Last element (List[-1]):", List[-1])
print("Third last element (List[-3]):", List[-3])










# Removing specific elements
List = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
print("Initial List:", List)

# Remove specific values
List.remove(5)
List.remove(6)
print("After removing 5 and 6:", List)

# Remove using loop (be careful with this approach)
List_copy = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
for i in [1, 2, 3, 4]:  # Better to use a separate list
    if i in List_copy:
        List_copy.remove(i)
print("After removing 1-4:", List_copy)








a=set()
a.add(10)














# Removing and returning elements
List = [1, 2, 3, 4, 5]
print("Original list:", List)

# Remove last element
removed = List.pop()
print("After pop():", List)
print("Removed element:", removed)

# Remove element at specific index
removed = List.pop(2)  # Remove element at index 2
print("After pop(2):", List)
print("Removed element:", removed)










# Various slicing operations
List = ['G', 'E', 'E', 'K', 'S', 'F', 'O', 'R', 'G', 'E', 'E', 'K', 'S']
print("Original list:", List)

# Slice from index 3 to 8
print("List[3:8]:", List[3:8])

# Slice from index 5 to end
print("List[5:]:", List[5:])

# Slice entire list
print("List[:]:", List[:])


### Negative Index Slicing

List = ['G', 'E', 'E', 'K', 'S', 'F', 'O', 'R', 'G', 'E', 'E', 'K', 'S']

# Slice till 6th element from last
print("List[:-6]:", List[:-6])

# Slice from -6 to -1
print("List[-6:-1]:", List[-6:-1])

# Reverse the entire list
print("List[::-1]:", List[::-1])














# Square of odd numbers from 1 to 10
odd_square = [x ** 2 for x in range(1, 11) if x % 2 == 1]
print("Odd squares:", odd_square)

# Equivalent traditional loop
odd_square_traditional = []
for x in range(1, 11):
    if x % 2 == 1:
        odd_square_traditional.append(x**2)
print("Same result with loop:", odd_square_traditional)

# More examples
even_numbers = [x for x in range(20) if x % 2 == 0]
print("Even numbers 0-19:", even_numbers)

# String manipulation
words = ["hello", "world", "python"]
uppercase = [word.upper() for word in words]
print("Uppercase words:", uppercase)













# Dictionary with integer keys
Dict = {1: 'Geeks', 2: 'For', 3: 'Geeks'}
print("Dictionary with integer keys:", Dict)

# Dictionary with mixed keys
Dict = {'Name': 'Geeks', 1: [1, 2, 3, 4]}
print("Dictionary with mixed keys:", Dict)

# Empty dictionary
Dict = {}
print("Empty dictionary:", Dict)

# Using dict() constructor
Dict = dict({1: 'Geeks', 2: 'For', 3: 'Geeks'})
print("Using dict():", Dict)

# Dictionary from pairs
Dict = dict([(1, 'Geeks'), (2, 'For')])
print("From pairs:", Dict)


# Creating nested dictionary
Dict = {1: 'Geeks', 2: 'For', 3: {'A': 'Welcome', 'B': 'To', 'C': 'Geeks'}}
print("Nested dictionary:", Dict)













# Adding elements to dictionary
Dict = {}
print("Empty dictionary:", Dict)

# Add elements one by one
Dict[0] = 'Geeks'
Dict[2] = 'For'
Dict[3] = 1
print("After adding elements:", Dict)

# Add multiple values to single key
Dict['Value_set'] = 2, 3, 4
print("After adding tuple:", Dict)

# Update existing key
Dict[2] = 'Welcome'
print("After updating key 2:", Dict)

# Add nested dictionary
Dict[5] = {'Nested': {'1': 'Life', '2': 'Geeks'}}
print("After adding nested key:", Dict)










# Accessing dictionary elements
Dict = {1: 'Geeks', 'name': 'For', 3: 'Geeks'}

# Access using key
print("Dict['name']:", Dict['name'])
print("Dict[1]:", Dict[1])

# Access using get() method
print("Dict.get(3):", Dict.get(3))
print("Dict.get('nonexistent', 'default'):", Dict.get('nonexistent', 'default'))






# Nested dictionary access
Dict = {'Dict1': {1: 'Geeks'}, 'Dict2': {'Name': 'For'}}

print("Dict['Dict1']:", Dict['Dict1'])
print("Dict['Dict1'][1]:", Dict['Dict1'][1])
print("Dict['Dict2']['Name']:", Dict['Dict2']['Name'])

# Deleting dictionary elements
Dict = {5: 'Welcome', 6: 'To', 7: 'Geeks',
        'A': {1: 'Geeks', 2: 'For', 3: 'Geeks'},
        'B': {1: 'Geeks', 2: 'Life'}}
print("Initial dictionary:", Dict)

# Delete specific key
del Dict[6]
print("After deleting key 6:", Dict)

# Delete from nested dictionary
del Dict['A'][2]
print("After deleting nested key:", Dict)









# Using pop to remove and return value
Dict = {1: 'Geeks', 'name': 'For', 3: 'Geeks'}
print("Original dictionary:", Dict)

# Pop specific key
popped_value = Dict.pop(1)
print("After popping key 1:", Dict)
print("Popped value:", popped_value)


### Using popitem() method

# Remove arbitrary key-value pair
Dict = {1: 'Geeks', 'name': 'For', 3: 'Geeks'}
print("Original dictionary:", Dict)

# Pop arbitrary item
popped_item = Dict.popitem()
print("After popitem():", Dict)
print("Popped item:", popped_item)










# Clear entire dictionary
Dict = {1: 'Geeks', 'name': 'For', 3: 'Geeks'}
print("Before clear:", Dict)

Dict.clear()
print("After clear:", Dict)









# Dictionary methods demonstration
original_dict = {'a': 1, 'b': 2, 'c': 3}

# copy() - shallow copy
copied_dict = original_dict.copy()
print("Original:", original_dict)
print("Copied:", copied_dict)

# keys() - get all keys
print("Keys:", list(original_dict.keys()))

# values() - get all values  
print("Values:", list(original_dict.values()))

# items() - get key-value pairs
print("Items:", list(original_dict.items()))

# update() - merge dictionaries
update_dict = {'d': 4, 'e': 5}
original_dict.update(update_dict)
print("After update:", original_dict)

# setdefault() - get value or set default
value = original_dict.setdefault('f', 6)
print("Setdefault result:", value)
print("Dictionary after setdefault:", original_dict)

# get() with default
print("Get with default:", original_dict.get('z', 'Not found'))

