def LCounter(number):
    dictionary1=["one","two","three","four","five",
                "six","seven","eight","nine","ten","eleven",
                "twelve","thirteen","fourteen","fifteen",
                "sixteen","seventeen","eighteen","nineteen"]
    dictionary2=["twenty","thirty","forty","fifty","sixty",
                 "seventy","eighty","ninety"]
    hundred="hundred"
    an="and"
    thousand="thousand"
    if number<20:
        return dictionary1[number-1]
    elif number==20:
        return dictionary2[0]
    elif number==30:
        return dictionary2[1]
    elif number==40:
        return dictionary2[2]
    elif number==50:
        return dictionary2[3]
    elif number==60:
        return dictionary2[4]
    elif number==70:
        return dictionary2[5]
    elif number==80:
        return dictionary2[6]
    elif number==90:
        return dictionary2[7]
    elif number%100==0 and number!=1000:
        return LCounter(number//100)+hundred
    elif number==1000:
        return "one"+thousand
    elif number>20 and number<30:
        return (LCounter(20)+LCounter(number-20))
    elif number>30 and number<40:
        return (LCounter(30)+LCounter(number-30))
    elif number>40 and number<50:
        return (LCounter(40)+LCounter(number-40))
    elif number>50 and number<60:
        return (LCounter(50)+LCounter(number-50))
    elif number>60 and number<70:
        return (LCounter(60)+LCounter(number-60))
    elif number>70 and number<80:
        return (LCounter(70)+LCounter(number-70))
    elif number>80 and number<90:
        return (LCounter(80)+LCounter(number-80))
    elif number>90 and number<100:
        return (LCounter(90)+LCounter(number-90))
    elif number>100 and number<1000:
        temp2=number%100
        return (LCounter((number//100)*100)+an+LCounter(temp2))
total=0
for i in range(1,1001):
    total=total+len(LCounter(i))
print(total)
