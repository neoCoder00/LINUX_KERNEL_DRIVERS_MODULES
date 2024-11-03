#!/usr/bin/python3
from subprocess import run 
print('iterating through target makefile\n')

def check_line_in_file(filename, line):
    with open(filename, 'r') as file:
        for file_line in file:
            if file_line.strip() == line:
                print(line,' -> PWD specifies evironment variables')
                
            else:
                # write a line to the target file that display environment variable settings
                run('make -p | grep PWD', shell=True)
                
                break

                
                # use -p flag to print out the environment variable values from the Makefile.

                # temporarily preserve the environment variable

                # set the env_reset disabled by editing the /etc/sudoers with root and visudo.

                # Then execute env and sudo env individually.

                
                

                
                

                
    


check_line_in_file("Debug_Makefile", "PWD := $(CURDIR)")






                
        


        




