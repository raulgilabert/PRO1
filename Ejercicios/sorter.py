import os

for directory in os.listdir('.'):
    if directory[2:3] != " ":
        print(directory)


