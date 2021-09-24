# verifys the period of a pseudorandom number generator
def find_PRNG_Period(rand_list):
    unique = []
    for x in rand_list:
        for i in unique:
            if(x == i):
                return len(unique)
        unique.append(x)
    return (len(unique))
