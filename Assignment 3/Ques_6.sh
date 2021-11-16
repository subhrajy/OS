echo "Enter three numbers: \c"
read num1
read num2
read num3

big=$num1

if [ $num1 -gt $num2 ] && [ $num1 -gt $num3 ]
then
	echo "Number 1 is biggest, i.e $num1"

elif [ $num2 -gt $num1 ] && [ $num2 -gt $num3 ]
then
	echo "Number 2 is biggest, i.e $num2"

else
	echo "Number 3 is biggest, i.e $num3"
fi
