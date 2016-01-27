# Makefile for Assignment 1
CXX = /usr/bin/g++
ASSIGNMENT = 1
ASSIGNMENT_NAME = assignment_${ASSIGNMENT}
MAIN = ${ASSIGNMENT_NAME}_unit_test
CPP_FILES = ${ASSIGNMENT_NAME}.cpp
H_FILES = ${ASSIGNMENT_NAME}.h
CXXFLAGS = -Wall -Wextra -pedantic -g

options: 
	@echo
	@echo Options
	@echo ----------------------------------------
	@echo 'make              - View these options'
	@echo 'make ${ASSIGNMENT_NAME} - Compile the assignment (create an executable)'
	@echo 'make style        - Runs the class style check'
	@echo 'make clean        - Deletes your executable'
	@echo 
	@echo 
	@echo "Once you've created your executable use the following to test"
	@echo './${ASSIGNMENT_NAME}     - Test for errors'
	@echo './${ASSIGNMENT_NAME} -s  - View passed tests'

# Type 'make lab' to create the executable
a ${ASSIGNMENT_NAME}: ${MAIN}.cpp ${H_FILES} ${CPP_FILES}
	${CXX} ${CXXFLAGS} ${MAIN}.cpp ${CPP_FILES} -o ${ASSIGNMENT_NAME}
	@echo
	@echo 'Compiled! (Fix any warnings above)'

# Type 'make style' to check your code style
s style: ../../helpful_files/cpplint.py
	python $< --filter=-runtime/references,-legal/copyright,-readability/streams,-runtime/explicit,-build/header_guard,-build/include ${H_FILES} ${CPP_FILES}

# Type 'make clean' to remove the executable
c clean:
	rm -rf ${ASSIGNMENT_NAME}
