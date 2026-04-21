# stanley johnson
import math

def calcRecArea(base, height):
    return base * height

def calcCircleArea(radius):
    return math.pi * (radius ** 2) 

def main(): 
    base = float(input("Enter a base value: "))
    height = float(input("Enter a height value: "))
    areaRec = calcRecArea(base, height)
    print("The area of a rectangle is ", areaRec)

    radius = float(input("Enter a radius value: "))
    areaCircle = calcCircleArea(radius)
    print("The area of the circle is ", areaCircle)

main()
