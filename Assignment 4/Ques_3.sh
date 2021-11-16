read -p "Enter a number - " number

sum=0
while [ $number -gt 0 ]
do
	temp=`expr $number % 10`
	sum=`expr $temp + $sum`
	number=`expr $number / 10`
done

echo $sum
