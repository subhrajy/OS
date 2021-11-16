read -p "Enter a number to check palindrome - " number

temp=0
rev=0
check=$number

while [ $number -gt 0 ]
do
    temp=$(( $number % 10 ))
    rev=$(( $rev * 10 + $temp ))
    number=$(( $number / 10 ))
done

if [[ $check -eq $rev ]]
then
    echo "Palindrome."
else
    echo "Not palindrome."
fi
