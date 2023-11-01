def find_data_type_of_input(input_value):
    """Finds the data type of input given by user.

    Args:
        input_value: The input value from the user.

    Returns:
        A string representing the data type of the input value.
    """


    data_type = type(input_value)
    if data_type is str:
        return "string"
    elif data_type is int:
        return "integer"
    elif data_type is float:
        return "float"
    elif data_type is bool:
        return "boolean"
    elif data_type is complex:
        return "complex"
    elif data_type is list:
        return "list"
    elif data_type is tuple:
        return "tuple"
    elif data_type is set:
        return "set"
    elif data_type is dict:
        return "dictionary"
    else:
        return "unknown"



# Example usage:

input_value = input("Enter a value: ")
data_type = find_data_type_of_input(input_value)
print(f"The data type of the input value is {data_type}.")
