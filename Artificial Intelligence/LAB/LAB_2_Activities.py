# Activity 1: Join Two Lists

def join_two_lists():

    print("Enter elements for first list (separated by spaces):")
    list1_input = input().split()
    list1 = [int(x) if x.isdigit() or (x.startswith('-') and x[1:].isdigit()) else x for x in list1_input]
    
    # Get second list from user
    print("Enter elements for second list (separated by spaces):")
    list2_input = input().split()
    list2 = [int(x) if x.isdigit() or (x.startswith('-') and x[1:].isdigit()) else x for x in list2_input]
    
    # Join the lists
    joined_list = list1 + list2
    
    print(f"First list: {list1}")
    print(f"Second list: {list2}")
    print(f"Joined list: {joined_list}")
    return joined_list

print("Example with predefined lists:")
example_list1 = [1, 2, 3, 'apple']
example_list2 = [4, 5, 'banana', 'cherry']
joined_example = example_list1 + example_list2
print(f"List 1: {example_list1}")
print(f"List 2: {example_list2}")
print(f"Joined: {joined_example}")
print()

join_two_lists()



















def is_palindrome(text):

    # Convert to lowercase and remove spaces
    cleaned_text = text.lower().replace(" ", "")
    
    # Compare string with its reverse
    return cleaned_text == cleaned_text[::-1]

# Test cases
test_strings = ["dad", "aibohphobia", "racecar", "hello", "A man a plan a canal Panama", "Madam", "python"]

print("Testing palindrome function:")
for test_str in test_strings:
    result = is_palindrome(test_str)
    print(f"'{test_str}' -> {result}")












def matrix_multiply(matrix_a, matrix_b):

    # Get dimensions
    rows_a = len(matrix_a)
    cols_a = len(matrix_a[0])
    rows_b = len(matrix_b)
    cols_b = len(matrix_b[0])
    
    # Check if multiplication is possible
    if cols_a != rows_b:
        raise ValueError("Cannot multiply: columns of A must equal rows of B")
    
    # Initialize result matrix with zeros
    result = [[0 for _ in range(cols_b)] for _ in range(rows_a)]
    
    # Perform multiplication
    for i in range(rows_a):
        for j in range(cols_b):
            for k in range(cols_a):
                result[i][j] += matrix_a[i][k] * matrix_b[k][j]
    
    return result

# Given matrices
a = [[1, 0, 0], [0, 1, 0], [0, 0, 1]]  # Identity matrix
b = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

print("Matrix A:")
for row in a:
    print(row)

print("\nMatrix B:")
for row in b:
    print(row)

# Calculate C = A * B
c = matrix_multiply(a, b)

print("\nMatrix C = A * B:")
for row in c:
    print(row)

# Additional example
print("\nAdditional example:")
matrix1 = [[1, 2], [3, 4]]
matrix2 = [[5, 6], [7, 8]]
result_example = matrix_multiply(matrix1, matrix2)

print(f"Matrix 1: {matrix1}")
print(f"Matrix 2: {matrix2}")
print(f"Result: {result_example}")

















import math

def calculate_polygon_perimeter(coordinates):

    if len(coordinates) < 3:
        raise ValueError("A polygon must have at least 3 vertices")
    
    perimeter = 0
    n = len(coordinates)
    
    # Calculate distance between consecutive points
    for i in range(n):
        # Current point
        x1, y1 = coordinates[i]
        # Next point (wrap around to first point for last vertex)
        x2, y2 = coordinates[(i + 1) % n]
        
        # Calculate distance using Euclidean distance formula
        distance = math.sqrt((x2 - x1)**2 + (y2 - y1)**2)
        perimeter += distance
    
    return perimeter

square = [(0, 0), (0, 1), (1, 1), (1, 0)]
print(f"Square coordinates: {square}")
print(f"Square perimeter: {calculate_polygon_perimeter(square):.2f}")

# Triangle
triangle = [(0, 0), (3, 0), (1.5, 2.6)]  # Approximate equilateral triangle
print(f"\nTriangle coordinates: {triangle}")
print(f"Triangle perimeter: {calculate_polygon_perimeter(triangle):.2f}")

# Pentagon (approximate regular pentagon)
pentagon = [(1, 0), (0.31, 0.95), (-0.81, 0.59), (-0.81, -0.59), (0.31, -0.95)]
print(f"\nPentagon coordinates: {pentagon}")
print(f"Pentagon perimeter: {calculate_polygon_perimeter(pentagon):.2f}")



















def symmetric_difference_custom(set_a, set_b):
    result = []
    
    # Add elements from set_a that are not in set_b
    for item in set_a:
        if item not in set_b and item not in result:
            result.append(item)
    
    # Add elements from set_b that are not in set_a
    for item in set_b:
        if item not in set_a and item not in result:
            result.append(item)
    
    return result

# Test sets
A = {1, 2, 3, 4, 5}
B = {4, 5, 6, 7, 8}

print(f"Set A: {A}")
print(f"Set B: {B}")

# Using custom function
custom_result = symmetric_difference_custom(list(A), list(B))
print(f"\nCustom symmetric difference: {set(custom_result)}")

# Compare with built-in functions
print(f"A.symmetric_difference(B): {A.symmetric_difference(B)}")
print(f"B.symmetric_difference(A): {B.symmetric_difference(A)}")
print(f"A ^ B: {A ^ B}")
print(f"B ^ A: {B ^ A}")

# Verification
print(f"\nAll methods give same result: {set(custom_result) == A.symmetric_difference(B)}")

print("\n" + "=" * 70)
print("ACTIVITY 6: PHONE DIRECTORY WITH TUPLE KEYS")
print("Dictionary with (first_name, last_name) tuple keys and phone numbers")
print("=" * 70)



















def phone_directory():


    phone_book = {
        ('John', 'Doe'): '123-456-7890',
        ('Jane', 'Smith'): '987-654-3210',
        ('Bob', 'Johnson'): '555-123-4567',
        ('Alice', 'Brown'): '111-222-3333',
        ('Charlie', 'Wilson'): '444-555-6666'
    }
    
    print("Phone Directory")
    print("-" * 30)
    print("Current contacts:")
    for (first, last), phone in phone_book.items():
        print(f"{first} {last}: {phone}")
    
    print("\nSearch for a phone number:")
    
    while True:
        # Get user input
        first_name = input("Enter first name (or 'quit' to exit): ").strip()
        if first_name.lower() == 'quit':
            break
            
        last_name = input("Enter last name: ").strip()
        
        # Search for the name
        key = (first_name, last_name)
        
        if key in phone_book:
            print(f"Phone number for {first_name} {last_name}: {phone_book[key]}")
        else:
            print(f"Sorry, {first_name} {last_name} not found in the directory.")
        
        print("-" * 40)


def phone_directory_example():
    phone_book = {
        ('John', 'Doe'): '123-456-7890',
        ('Jane', 'Smith'): '987-654-3210',
        ('Bob', 'Johnson'): '555-123-4567',
        ('Alice', 'Brown'): '111-222-3333',
        ('Charlie', 'Wilson'): '444-555-6666'
    }
    
    print("Phone Directory Example:")
    print("Available contacts:")
    for (first, last), phone in phone_book.items():
        print(f"  {first} {last}: {phone}")

    test_searches = [('John', 'Doe'), ('Jane', 'Smith'), ('Bob', 'Jones'), ('Alice', 'Brown')]
    
    print("\nExample searches:")
    for first, last in test_searches:
        key = (first, last)
        if key in phone_book:
            print(f" {first} {last}: {phone_book[key]}")
        else:
            print(f" {first} {last}: Not found")


phone_directory_example()

print("\n" + "=" * 50)
print("ALL ACTIVITIES COMPLETED!")
print("=" * 50)

phone_directory()