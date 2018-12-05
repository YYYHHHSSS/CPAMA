.PHONY: done clean #伪指令

main= #主函数名
finc1= #函数名
line= #命令行参数

lib=-L../
libdir=-lfunc
hfile=-I../func

all: done clean

done: test
	@echo "测试程序$(main)"
	@./test $(line)

test: $(prog)
	@gcc $(hfile)  -o test $(main) $(func1) $(lib) $(libdir) 

clean: 
	@rm test
