year, month, day = input().split("/")


if int(year) > 2019 or int(month) > 4 or int(day) > 31:
    print("TBD")
else:
    print("Heisei")
