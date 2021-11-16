read -p "Enter a number - " number

temp=0
rev=0

while [ $number -gt 0 ]
do
    temp=$(( $number % 10 ))
    rev=$(( $rev * 10 + $temp ))
    number=$(( $number / 10 ))
done

echo $rev
