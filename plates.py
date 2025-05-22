import sys

def isLetterOk(plate):
    if plate[0].isalpha() and plate[1].isalpha():
        return True
    else:
        return False

def lenOk(plate):
    if 6 <= len(plate) <= 12:
        return True
    else:
        return False

def noSpecialSymbols(plate):
    for digit in plate:
        if digit.isalnum():
            continue
        else:
            sys.exit("Invalid")
    
    return True

def isValid(isLenOk, isLetters, isDigit, noPonctuation):
    if isLenOk == True and isLetters == True and isDigit == True and noPonctuation == True:
        print("Valid")
    else:
        print("Invalid")

def isDigit(plate):
    digits = []
    for c in plate:
        if c.isdigit():
            digitIndex = plate.index(c)
            for item in plate[digitIndex + 1:]:
                if item.isdigit():
                    digits.append(c)
                else:
                    return False
        else:
            continue
    if digits[0] == '0':
        return False
    
    return True

def main():
    plate = input('Plate: ')

    isLenOk = lenOk(plate)
    isLetters = isLetterOk(plate)
    isDigitOk = isDigit(plate)
    noPonctuation = noSpecialSymbols(plate)

    isValid(isLenOk, isLetters, isDigitOk, noPonctuation)

main()
