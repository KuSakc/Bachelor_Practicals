def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


def main():
    print("Euclidean Algorithm: GCD Calculator")
    
    try:
        num1 = int(input("Enter the first number: "))
        num2 = int(input("Enter the second number: "))
    except ValueError:
        print("Error: Please enter valid integers.")
        return
    
    if num1 == 0 and num2 == 0:
        print("GCD is undefined for both numbers being 0.")
        return
    
    result = gcd(abs(num1), abs(num2))
    print(f"\nThe GCD of {num1} and {num2} is: {result}")


main()