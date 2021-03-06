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
""")

name = input("Test: ")
num = input("Num of tests: ")
language = input("Language (en, es, ca): ")

dir = "~/universidad/PRO1/Ejercicios/" + name + "_" + language + "/"

os.system("g++ " + dir + name + ".cc -o " + dir + name + ".x")

for i in range(1, 1 + int(num)):
    print("-------------------")
    print(i)
    print("-------------------")

    os.system(dir + name + ".x < " + dir + "sample" + str(i) + ".inp > " + dir + "sample" + str(i) + ".out")
    os.system("diff " + dir + "sample" + str(i) + ".out " + dir + "sample" + str(i) + ".cor")
