final: driver.o BST312.h
	g++ -o BST driver.o
driver: driver.cpp BST312.h
	g++ -c -o driver.cpp driver.o