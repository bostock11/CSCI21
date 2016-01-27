# Makefile for Lab 1
CXX = /usr/bin/g++
LAB = 1
LAB_NAME = lab_${LAB}
MAIN = ${LAB_NAME}_unit_test
CPP_FILES = ${LAB_NAME}.cpp
H_FILES = ${LAB_NAME}.h
CXXFLAGS = -Wall -Wextra -pedantic -g

options: 
	@echo
	@echo Options
	@echo ----------------------------------------
	@echo 'make              - View these options'
	@echo 'make instructions - View the lab instructions (q to quit)'
	@echo 'make ${LAB_NAME}        - Compile the lab (create an executable)'
	@echo 'make style        - Runs the class style check (10% of your points!)'
	@echo 'make clean        - Deletes your executable'
	@echo 'Note: All of these options can be run by just typing the first letter'
	@echo '      of the target, i.e. "make i" instead of "make instructions"'
	@echo 
	@echo 
	@echo "Once you've created your executable use the following to test"
	@echo './${LAB_NAME}     - Test for errors'
	@echo './${LAB_NAME} -s  - View passed tests'

i instructions:
	less readme

# Type 'make lab' to create the executable
l ${LAB_NAME}: ${MAIN}.cpp ${H_FILES} ${CPP_FILES}
	${CXX} ${CXXFLAGS} ${MAIN}.cpp ${CPP_FILES} -o ${LAB_NAME}
	@echo
	@echo 'Compiled! (Fix any warnings above)'

# Type 'make style' to check your code style
s style: ../../helpful_files/cpplint.py 
	python $< --filter=-runtime/references,-legal/copyright,-readability/streams,-runtime/explicit,-build/header_guard,-build/include ${H_FILES} ${CPP_FILES}

# Type 'make clean' to remove the executable
c clean:
	rm -rf ${LAB_NAME}
