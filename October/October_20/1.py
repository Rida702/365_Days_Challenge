#https://www.codingninjas.com/studio/problems/implement-atoi-function_981270?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

def createAtoi(str_1):
    min_value = -2**31
    max_value = 2**31 - 1
    j = 0
    str_2 = ""
    for i in range(len(str_1)):
        if str_1[i] == " ":
            continue
        elif str_2 == "" and (str_1[i] == '-' or str_1[i]=='+' ) :
            if str_1[i]=='+':
                continue
            else:
                str_2 += str_1[i]
                j+=1
        elif str_1[i] == "0" or str_1[i] == "1" or str_1[i] == "2" or str_1[i] == "3" or str_1[i] == "4" or str_1[i] == "5" or str_1[i] == "6" or str_1[i] == "7" or str_1[i] == "8" or str_1[i] == "9":
            if str_2 == "" and str_1[i] == "0":
                continue
            else:
                str_2 += str_1[i]
                j+=1
        else:
            break
    if str_2 == "" or str_2 == "-":
        return 0
    else:
        number = int(str_2) 
        if number > max_value:
            return  max_value
        elif number < min_value:
            return min_value
        else:
            return number
        
str_1 = input()
print(createAtoi(str_1))