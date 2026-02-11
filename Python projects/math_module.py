import math

number=float(input("enter 1st number = "))
num2=float(input("enter 2nd number = "))

absolute =math.fabs(number)
print(f"\n1. absolute value : |{number}| = {absolute}")

ceiling = math . ceil ( number )
print ( f"2. Ceiling : ceil ({ number }) = { ceiling }")

floor = math . floor ( number )
print ( f"3. Floor : floor ({ number }) = { floor }")

if number >= 0:
    sqrt = math . sqrt ( number )
print ( f"4. Square Root : sqrt ({ number }) = { sqrt }")

power = math .pow ( number , 2)
print ( f"5. Power : { number }^2 = { power }")

if number >= 0 and number == int ( number ) :
    factorial = math . factorial (int ( number ) )
    print ( f"6. Factorial : {int ( number )}! = { factorial }")

print ("\n- - - TRIGONOMETRIC FUNCTIONS - - -\n")

angle_radians = math . radians ( num2 )
sine = math . sin ( angle_radians )
print ( f"7. Sine : sin ({ num2 }) = { sine}")
print (" Calculates sine of angle \n")

cosine = math . cos ( angle_radians )
print ( f"8. Cosine : cos ({ num2 }) = { cosine}")
print (" Calculates cosine of angle \n")

tangent = math . tan ( angle_radians )
print ( f"9. Tangent : tan ({ num2 }) = { tangent}")
print (" Calculates tangent of angle \n")


print ("\n- - - LOGARITHMIC FUNCTIONS - - -\n")

if number > 0:
    log_natural = math . log ( number )
    print ( f"10. Natural Log : ln ({ number }) = { log_natural}")
    print (" Logarithm base e\n")

log10 = math . log10 ( number )
print ( f"11. Log Base 10: log10 ({ number }) = { log10}")
print (" Logarithm base 10\n")

log2 = math . log2 ( number )
print ( f"12. Log Base 2: log2 ({ number }) = { log2}")
print (" Logarithm base 2\n")