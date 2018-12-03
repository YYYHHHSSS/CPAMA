.PHONY: done clean

prog=

all: done clean

done: test
	@echo "测试程序$(prog)"
	@./test

test: $(prog)
	@gcc -o test $(prog)

clean: 
	@rm test
