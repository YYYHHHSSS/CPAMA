.PHONY: done clean #伪指令

main= #主函数名
ifdef func1
	func=../func/$(func1) #指定函数
endif
line= #命令行参数

#lib=-L../ #指定库路径
#libdir=-lfunc #指定库目录
hfile=-I../func #指定头文件路径


all: done clean

done: test
	@echo "测试程序$(main)"
	@./test $(line)

test: $(prog)
	@gcc $(hfile)  -o test $(main) $(func)

clean: 
	@rm test
