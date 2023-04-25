# quadratic

Here's the algorithm for solving the quadratic equation using C programming language:

1. Begin the program.
2. Declare variables a, b, c, dis, root1, root2, realPart, imagPart as double.
3. Print the equation ax^2 + bx + c.
4. Ask the user to input the values for a, b, and c.
5. Calculate the discriminant using the formula dis = b^2 - 4ac.
6. Check the value of the discriminant using if else statements.
7. If dis > 0, calculate root1 and root2 using the formula (-b + sqrt(dis)) / (2a) and (-b - sqrt(dis)) / (2a) respectively.
8. Print the values of root1 and root2.
9. If dis = 0, calculate root1 using the formula -b / (2a).
10. Print the value of root1.
11. If dis < 0, calculate the real and imaginary parts of the roots using the formulas -b / (2a) and sqrt(-dis) / (2a) respectively.
12. Print the values of the roots with the imaginary part.
13. End the program.
