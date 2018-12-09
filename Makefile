.PHONY: done clean #伪指令

dir=$(filter Chapter% func, $(shell ls)) #建立源码目录

vpath %.c $(dir)

func= #在命令行输入指定的文件名时，用双引号包围起来
line= #命令行参数

#lib=-L../ #指定库路径
#libdir=-lfunc #指定库目录
hfile=-Ifunc #指定头文件路径


all: done clean

done: test
	@echo "测试程序:"
	@./test $(line)

test: $(func)
	@gcc $(hfile)  -o test $^

clean: 
	@rm test
