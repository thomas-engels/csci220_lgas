m = 4  # size of initial table
while (m * .75) < 17262:
    # end-goal: table size * load factor > # of elements
    # continue doubling size table size to achieve load factor
    m = m * 2
print(m)