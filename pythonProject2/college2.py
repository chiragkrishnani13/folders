# Function to display the menu
def display_menu(menu):
    print("Menu:")
    for item, price in menu.items():
        print(f"{item}: ${price:.2f}")


# Function to take the order
def take_order(menu):
    order = {}
    while True:
        display_menu(menu)
        print("Enter 'done' to finish your order.")
        item = input("Enter the item you want to order: ")

        if item.lower() == 'done':
            break

        if item in menu:
            quantity = int(input("Enter the quantity: "))
            order[item] = order.get(item, 0) + quantity
        else:
            print("Invalid item. Please choose from the menu.")

    return order


# Function to calculate the total bill
def calculate_bill(order, menu):
    total = 0
    for item, quantity in order.items():
        total += menu[item] * quantity
    return total


# Main program
if __name__ == "__main__":
    # Define the menu
    menu = {
        "burger": 5.99,
        "pizza": 8.99,
        "pasta": 7.49,
        "salad": 4.99,
        "soda": 1.99
    }

    # Take the order
    order = take_order(menu)

    # Display the order
    print("\nYour Order:")
    for item, quantity in order.items():
        print(f"{item}: {quantity} x ${menu[item]:.2f} = ${quantity * menu[item]:.2f}")

    # Calculate and display the total bill
    total_bill = calculate_bill(order, menu)
    print(f"\nTotal Bill: ${total_bill:.2f}")
