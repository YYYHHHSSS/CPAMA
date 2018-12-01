.PHONY: all done clean            #伪目标

func=                             # 在命令行输入`func=function.c`来测试函数`function.c`
CToO=:.c=.o
all: done clean

done: test
	@chmod u+x test               # @抑制make打印命令
	@echo "测试函数：$(func)"
	@./test

test: main.o ${func$(CToO)}
	gcc -o test main.o ${func$(CToO)}

main.o: main.c
	gcc -c main.c

compare.o: $(func)
	gcc -c $(func)

clean:
	@rm test main.o ${func$(CToO)}
