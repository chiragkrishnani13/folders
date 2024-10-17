def sort_tuples_by_last_element(tuples_list):
    sorted_list = sorted(tuples_list, key=lambda x: x[-1])
    return sorted_list

# Input
num_test_cases = int(input("Enter the number of test cases: "))
test_cases = []

for _ in range(num_test_cases):
    input_tuple = tuple(( input("Enter tuple (space-separated integers): ").split(',')))
    test_cases.append(input_tuple)

# Sorting and printing the list of tuples for each test case
for i in range(num_test_cases):
    sorted_result = sort_tuples_by_last_element(test_cases[i])
    print(sorted_result)
