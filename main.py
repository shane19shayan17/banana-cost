def calc_cost(cost, number):
    return cost * (number * (number + 1) / 2)

inputs = input().split()

cost = int(inputs[0])
dollars = int(inputs[1])
number = int(inputs[2])

final_cost = calc_cost(cost,number)
borrow = int(final_cost - dollars)
if borrow > 0:
    print(borrow)
else:
    print(0)