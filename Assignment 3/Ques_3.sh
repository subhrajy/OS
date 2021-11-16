echo "Enter two numbers a and b"

read -p "Enter first number: " num1
read -p "Enter second number: " num2

temp=$num1
num1=$num2
num2=$temp

echo "\nAfter swapping...\n"

echo "a is $num1"
echo "b is $num2"

