import os

print("""
USAGE:

Execute the program in the PRO1 general directory with the structure:

PRO1
|- tester.py
|- Exercises
   |- P34279_en
      |- P34279.cc
      |- P34279.x
      |- sample-1.inp
      |- sample-1.cor
      |- ...
   |- P37297_es
   |- ...

The .cc program must be compiled and must be named as the directory deleting the language
""")

name = input("Test: ")
num = input("Num of tests: ")
language = input("Language (en, es, ca): ")

dir = "Ejercicios/" + name + "_" + language + "/"

for i in range(1, 1 + int(num)):
    print("-------------------")
    print(i)
    print("-------------------")

    os.system(dir + name + ".x < " + dir + "sample-" + str(i) + ".inp > " + dir + "sample-" + str(i) + ".out")
    os.system("diff " + dir + "sample-" + str(i) + ".out " + dir + "sample-" + str(i) + ".cor")