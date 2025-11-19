name = input("Give me a name\n")
length = len(name)
mid = length // 2

for i in range(0, length):
	for j in range(0, mid):
		print(name[j + j], end=" ")
		print(name[mid])
		print(name[j + j], end=" ")
	print()

