# data1, data2, data3 = map(int, input("Enter three numbers: ").split())
# print(f"Number 1 = {data1}, Number 2 = {data2}, Number 3 = {data3}")

# data = []
# for i in range(5):
#     # print(i, end=" ")
#     data.append(i)
# # print()
# print(data)

# data = []
# while True:
#     num = int(input("Enter a number: "))
#     if num == 0:
#         break
#     data.append(num)
# print(data)

# import random
# data = []
# for i in range(10):
#     data.append(random.randint(-10, 10))
# print(data)

# result = []
# for x in data:
#     if x > 0 and x % 2 == 0:
#         result.append(x)
# print(result)

# for x in data:
#     if x < 0 and x % 2 != 0:
#         data.remove(x)
# print(data)


# data = [int(x) for x in range(1, 10, 2)]
# print(data)

# data = [int(x) for x in input("Data: ").split()]
# print(data)

# print(sum(data))
# print(max(data))
# print(min(data))

# import numpy as np
# print(np.prod(data))


# data = [x for x in range(0, 10, 2)]
# print(data)

# print(data[:])
# print(data[2:])
# print(data[1:3])
# print(data[:2])
# print(data[-1:-2])
# print(data[-2:-1])

# data.sort(reverse=True)
# print(data)
# print(sorted(data))


# dd-mm-yyyy
import datetime

datestr = input("Data (Format - dd-mm-yyyy):")
bdate = datetime.datetime.strptime(datestr, "%d-%m-%Y")
print(bdate)

delta = datetime.timedelta(days=1000)
print(delta)

resultDate = bdate + delta
print(resultDate)
print(resultDate.strftime("%d-%m-%Y"))