all: main.exe

main.exe: main.cpp
	mcxx --profile=tareador-mcxx -k main.cpp -o main.exe -std=c++11 -DTAREADOR_RUNTIME_NONMPI

.PHONY: clean
clean:
	rm main.exe tareador-* -f
