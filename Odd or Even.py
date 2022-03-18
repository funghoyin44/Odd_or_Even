def odd_or_even(input):
    return input % 2

def test(input):
    if odd_or_even(input) == 0:
        print("%d is even." %input) 
    else:
        print("%d is odd." %input)

test(3)