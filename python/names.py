names = input().split(" ")
for name in names:
    if name[-2:] == "sh":
        print(name)

if len(names) == 1 and len(names[0]) < 2:
    print("Missing required inputs") 
