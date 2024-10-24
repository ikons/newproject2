main2: main2.o reverse.o palindrome.o
	cc -w main2.o reverse.o palindrome.o -o main2
	
main2.o: palindrome.h

reverse.o: reverse.h

palindrome.o: palindrome.h reverse.h

clean:
	rm main2 main2.o reverse.o palindrome.o