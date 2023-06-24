

sum=0           
N=10            
i=1             
sign=1         

while [ $i -le $N ]  
do
    term=$((i * sign))  
    sum=$((sum + term)) 
    sign=$((sign * -1))  
    i=$((i + 1))     
done

echo "The sum of the series is: $sum" 
