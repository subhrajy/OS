read -p "Enter a 5 digit number - " number

i=1
while [ $number -gt 0 ]
do
	temp=`expr $number % 10`
	#dig=`expr $dig \* 10 + $temp`

	if [ $(( $i % 2 )) -ne 0 ]
	then
		echo $temp
		temp=0
	fi
	number=`expr $number / 10`
	i=`expr $i + 1`
done
