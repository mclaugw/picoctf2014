i = 1
x = 289
n = 5493
for i in range(1, 26):
    x = (x * i) % n
print "flag_" + str(x)
