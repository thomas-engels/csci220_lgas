my_list = [ 85, 39, 9, 26, 25, 64]

indices = []

for item in my_list:
    indices.append(item % 8)

for i in range(6):
    print(f"{indices[i]}:{my_list[i]}")