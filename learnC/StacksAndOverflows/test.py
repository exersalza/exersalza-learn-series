# Create a file with a list of all the files in a directory
# Usage:
#   python3 list_files.py <directory> <output_file>

# Imports
import os
import sys

# define the main function
def main():
    # get the directory name and output file name
    directory = sys.argv[1]
    output_file = sys.argv[2]

    # open the output file
    out_file = open(output_file, 'w')

    # get a list of all the files in the directory
    files = os.listdir(directory)

    # write the list to the output file
    for file in files:
        out_file.write(file + '\n')

    # close the output file
    out_file.close()

    # print the number of files in the directory
    print('There are {} files in the directory.'.format(len(files)))

main()
