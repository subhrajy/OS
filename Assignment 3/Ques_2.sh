echo "Enter two numbers :"
read num1
read num2

sum=`expr $num1 + $num2`
avg=`expr $sum / 2`

echo "Sum is : $sum"
echo "Average is : $avg"
