def digital_root(num):
    sum = 0
    for digit in str(num):
        sum+=int(digit)
    number = sum
    if int(number)>=10:
        return digital_root(number)
    else:
        return number
print("Digital root of 932 = "+str(digital_root(932)))
