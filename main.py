def binToDec(bin):
    bin = str(bin)
    dec = 0
    for i in range(len(bin)):
        dec += int(bin[i]) * 2 ** (len(bin) - i - 1)
    return dec
def decToBin(dec):
    bin = ""
    while dec > 0:
        bin = str(dec % 2) + bin
        dec = dec // 2
    return bin
def doNothing(obj):
    return binToDec(decToBin(obj))
def assertInverse(f1,f2,x):
    return f1(f2(x)) == x
print(lambda x: x*3)