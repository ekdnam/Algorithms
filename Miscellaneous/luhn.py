# -*- coding: utf-8 -*-
"""
Created on Mon Apr 20 13:51:06 2020

@author: vgadi
"""

import numpy as np
import pandas as pd

def get_even_odd_indexed_digits(credit_card_number, len_number):
    odd_list = []
    even_list = []
    for i in range(0, len_number):
        if i%2 == 1:
            odd_list.append(int(credit_card_number[i]))
        else:
            even_list.append(int(credit_card_number[i]))
    return np.array(odd_list, dtype = int), np.array(even_list, dtype = int)

def odd_indexed_array_operations(array_odd):
    list_modulo = []
    len_odd = len(array_odd)
    array_odd = 2*array_odd
    for i in range(0, len_odd):
        if(int(array_odd[i]/(10)) == 0):
            list_modulo.append(array_odd[i])
        else:
            list_modulo.append(int(array_odd[i]%10))
            list_modulo.append(int(array_odd[i]/10))
    return np.array(list_modulo, dtype = int)
    
    
def get_sum(array_modulo, array_even):
    sum_modulo = np.sum(array_modulo, axis = 0)
    sum_even = np.sum(array_even, axis = 0)
    sum_required = sum_even + sum_modulo
    return sum_required

def validate_credit_card(credit_card_number):
    len_number = len(credit_card_number)
    
    array_odd, array_even = get_even_odd_indexed_digits(credit_card_number, len_number)
    
    array_modulo = odd_indexed_array_operations(array_odd)
    
    sum_required = get_sum(array_modulo, array_even)
    
    if(int(sum_required % 10) == 0):
        return 1
    else:
        return 0
    
amex = "378282246310000"
    
if(validate_credit_card(amex) == 1):
    print("Credit card is legit!")
else:
    print("Credit card is faulty")

#def luhnalg(num):
#    a=num
#    count=0
#    while a>=1:
#        a//=10
#        count+=1
#        l=0
#        m=0
#        n=0
#        o=0
#        p=0
#    for i in range(2,count+1,2):
#        k=i-1
#        digit=num%10**i
#        digit=digit//10**k
#        digit*=2
#        if digit>10:
#            l=digit
#            m=l%10
#            n=l//10
#            o=m+n
#        else:
#            p+=digit
#        total=o+p
#
#    t=0
#    for i1 in range(1,count+1,2):
#        k1=i1-1
#        dig=num%10**i1
#        dig=dig//10**k1
#        t=+dig
#
#    grandtot=total+t
#
#    if grandtot%10==0:
#        print('valid')
#    else:
#        print('Not valid')
#
#
#luhnalg(378282246310000)
#
#
