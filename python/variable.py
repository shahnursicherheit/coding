def add(a,b):
    return a+b

# variable 

name = " shahnur " 
age = 23
height = 5.7
is_student = True 
print (name, age, height, is_student )


# if elif else condition

if age >= 18:
    print ("You are an adult ")
elif age > 12: 
    print ("You are a teenager.")
else:
    print ("You are a child.")


# loop for while
for i in range(5):
    print("Number:", i)

x = 1 
while x <= 5:
    print ("Count", x)
    x += 1
#list 
fruits = ["apple", "banana", "cherry"]
print (fruits[1])

# dictionary 

person = {"name": "Shah", "age": 25}
print(person["name"])

#funtion

result = add(5,3) 
print (result)
