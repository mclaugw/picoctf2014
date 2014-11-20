#!/usr/bin/python

import sys

"""
Daedalus Corporation encryption script.
"""


def xor(input_data, key):
    result = ""
    for ch in input_data:
        result += chr(ord(ch) ^ key)

    #print "result from xor: " + str(result)
    return result


def encrypt(input_data, password):
    #key = 0
    #for ch in password:
    #    key ^= ((2 * ord(ch) + 3) & 0xff)

    #print "key in encrypt: " + str(key)
    #return xor(input_data, key)
    return xor(input_data, password)


def decrypt(input_data, password):
    return encrypt(input_data, password)


def usage():
    print("Usage: %s [encrypt/decrypt] [in_file] [out_file] [password]"
          % sys.argv[0])
    exit()


def main():

    input_data = "Htuo<qyoo}{y<uo<zsn<X}yx}pio<_snlsn}husr<srpe2<Sin<~piylnurho<zsn<hty<_e~sn{<}ny<lnshyhyx<kuht<}<l}ooksnx2<Ht}h<l}ooksnx<uo</$,y}xz,~}~~/~z~}}*%zx.y$y}yx"
    result_data = ""
    for i in range(28, 29):
        result_data = decrypt(input_data, i)
        print "i: " + str(i)
        print result_data

main()
