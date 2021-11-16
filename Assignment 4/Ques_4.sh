read -p "Enter a string - " str
read -p "Enter the sub string - " substr

strlen=`echo $str | wc -c`
sublen=`echo $substr | wc -c`

strlen=`expr $strlen - 1`
sublen=`expr $sublen - 1`

found=0

for (( i=0; i<strlen; i++ ))
do
    if [[ ${str:i:1} == ${substr:0:1} ]]
    then
        echo "1st match, i is $i"
        kstr=$i
        ksubstr=0

        while (( kstr<strlen && ksubstr<sublen ))
        do
            if [[ ${str:kstr:1} != ${substr:ksubstr:1} ]]
            then
                echo 'some'
                break
            fi
            kstr=`expr $kstr + 1`
            ksubstr=`expr $ksubstr + 1`
        done

        if [[ ${ksubstr} == ${sublen} ]]
        then
            echo "substring $substr is found at the index $i"
            found=1
            break
        fi
    fi
done

if [[ $found == 0 ]]
then
    echo "substring $substr is not found in the string"
fi
