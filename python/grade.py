def grade_of_the_student(input1):
    avg = sum(input1) / len(input1)
    if avg >= 80:
        return "A"
    elif avg >= 60 and avg < 80:
        return "B"
    elif avg >= 40 and avg < 60:
        return "C"
    else:
        return "D"


print(grade_of_the_student([64, 80, 72, 75, 68]))
print(grade_of_the_student([56, 20, 30, 35, 45]))
print(grade_of_the_student([84, 72, 90, 92, 80]))
print(grade_of_the_student([45, 64, 36, 50, 48]))
